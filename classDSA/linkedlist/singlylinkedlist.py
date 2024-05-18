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

if __name__ == "__main__":
    l = SinglyLinkedList()
    l.append(5)
    l.add_last(10)
    l.add_first(6)
    l.add_at(1, 15)
    
    l.print_list()
    
    print(l.index_of(10))
    print(l.contains(15))
    print(l.contains(19))
    
    l.clear()
