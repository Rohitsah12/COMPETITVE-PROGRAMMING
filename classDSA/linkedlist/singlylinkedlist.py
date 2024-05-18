class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next

class SinglyLinkedList:
    def __init__(self):
        self.size = 0
        self.head = None
    
    def __len__(self):
        return self.size
    
    def is_empty(self):
        return self.size == 0
    
    def append(self, data):
        if self.is_empty():
            self.head = Node(data)
        else:
            curr = self.head
            while curr.next:
                curr = curr.next
            curr.next = Node(data)
        self.size += 1
    
    def add_last(self, data):
        self.append(data)
    
    def add_first(self, data):
        new_node = Node(data, self.head)
        self.head = new_node
        self.size += 1
    
    def add_at(self, index, data):
        if index < 0 or index > self.size:
            raise IndexError("Index out of range")
        if index == 0:
            self.add_first(data)
        else:
            curr = self.head
            for _ in range(index - 1):
                curr = curr.next
            new_node = Node(data, curr.next)
            curr.next = new_node
            self.size += 1
    
    def peek_first(self):
        if self.is_empty():
            raise ValueError("List is empty")
        return self.head.data
    
    def peek_last(self):
        if self.is_empty():
            raise ValueError("List is empty")
        curr = self.head
        while curr.next:
            curr = curr.next
        return curr.data
    
    def remove_first(self):
        if self.is_empty():
            raise ValueError("List is empty")
        self.head = self.head.next
        self.size -= 1
    
    def remove_last(self):
        if self.is_empty():
            raise ValueError("List is empty")
        if self.head.next is None:
            self.head = None
        else:
            prev = None
            curr = self.head
            while curr.next:
                prev = curr
                curr = curr.next
            prev.next = None
        self.size -= 1
    
    def remove_at(self, index):
        if index < 0 or index >= self.size:
            raise IndexError("Index out of range")
        if index == 0:
            self.remove_first()
        else:
            curr = self.head
            for _ in range(index - 1):
                curr = curr.next
            curr.next = curr.next.next
            self.size -= 1
    
    def index_of(self, data):
        curr = self.head
        index = 0
        while curr:
            if curr.data == data:
                return index
            curr = curr.next
            index += 1
        return -1
    
    def contains(self, data):
        return self.index_of(data) != -1
    
    def clear(self):
        self.head = None
        self.size = 0
    
    def print_list(self):
        curr = self.head
        while curr:
            print(curr.data, end=' ')
            curr = curr.next
        print()

    def rotate(self, k):
        if self.is_empty() or k <= 0 or k >= self.size:
            return
        k = k % self.size
        curr = self.head
        count = 1
        while count < self.size - k and curr:
            curr = curr.next
            count += 1
        
        if not curr:
            return
        
        kthNode = curr
        while curr.next:
            curr = curr.next
        curr.next = self.head
        self.head = kthNode.next
        kthNode.next = None
    
    def reverse(self):
        prev = None
        curr = self.head
        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        self.head = prev
    
    def merge(self, other):
        if not isinstance(other, SinglyLinkedList):
            raise ValueError("Argument must be an instance of SinglyLinkedList")
        if self.is_empty():
            self.head = other.head
        else:
            curr = self.head
            while curr.next:
                curr = curr.next
            curr.next = other.head
        self.size += other.size
    
    def interleave(self, other):
        if not isinstance(other, SinglyLinkedList):
            raise ValueError("Argument must be an instance of SinglyLinkedList")
        dummy = Node(0)
        tail = dummy
        p = self.head
        q = other.head
        while p and q:
            tail.next = p
            p = p.next
            tail = tail.next
            tail.next = q
            q = q.next
            tail = tail.next
        if p:
            tail.next = p
        if q:
            tail.next = q
        self.head = dummy.next
    
    def find_middle(self):
        if self.is_empty():
            raise ValueError("List is empty")
        slow = self.head
        fast = self.head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        return slow.data
    
    def split_at(self, index):
        if index < 0 or index > self.size:
            raise IndexError("Index out of range")
        if index == 0:
            second_list = SinglyLinkedList()
            second_list.head = self.head
            second_list.size = self.size
            self.clear()
            return self, second_list
        curr = self.head
        for _ in range(index - 1):
            curr = curr.next
        second_list = SinglyLinkedList()
        second_list.head = curr.next
        second_list.size = self.size - index
        curr.next = None
        self.size = index
        return self, second_list

# Usage example
if __name__ == "__main__":
    l1 = SinglyLinkedList()
    l1.append(1)
    l1.append(2)
    l1.append(3)
    l1.append(4)
    l1.append(5)
    l1.print_list()
    
    l1.rotate(2)
    l1.print_list()
    
    l1.reverse()
    l1.print_list()
    
    l2 = SinglyLinkedList()
    l2.append(6)
    l2.append(7)
    
    l1.merge(l2)
    l1.print_list()
    
    l3 = SinglyLinkedList()
    l3.append(8)
    l3.append(9)
    l3.append(10)
    
    l1.interleave(l3)
    l1.print_list()
    
    print("Middle element:", l1.find_middle())
    
    left, right = l1.split_at(3)
    left.print_list()
    right.print_list()
