class Node:
    def __init__(self,data,prev=None,next=None):
        self.data=data
        self.prev=prev
        self.next=next
        def __str__(self):
            return str(self.data)

class Doublylinkedlist:
    def __init__(self):
        self.__size=0
        self.__head=None
        self.__tail=None
    
    def __len__(self):
        return self.__size
    def clear(self):
        return None
    def size(self):
        return self.__size
    def isempty(self):
        return self.__size==0
    def append(self,elem):
        if self.isempty():
            self.__head=self.__tail=Node(elem,None,None)
        else:
            self.__tail.next=Node(elem,self.__tail,None)
            self.__tail=self.__tail.next
        self.__size+=1
    def addlast(self,elem):
        self.append(elem)
    def addfirst(self,elem):
        if self.isempty():
            self.__head=self.__tail=Node(elem,None,None)
        else:
            self.__head.prev=Node(elem,None,self.__head)
            self.__head=self.__head.prev
        self.__size+=1
    def addAt(self,index,data):
        if index < 0:
            raise Exception("Out of bond")
        if index > self.__size:
            raise Exception("Out of bond")
        if index == 0:
            return self.addfirst(data)
        if index==self.__size:
            return self.append(data)
        trav=self.__head
        for _ in range(0,index-1):
            trav=trav.next
        newNode=Node(data,trav,trav.next)
        trav.next.prev=newNode
        trav.next=newNode
        self.__size+=1
    def peekfirst(self):
        if self.isempty:
            raise Exception('Element not present')
        else:
            return self.__head.data
    def peeklast(self):
        if self.isempty:
            raise Exception('Element not present')
        else:
            return self.__tail.data
    def removefirst(self):
        if self.isempty():
            raise Exception('empty list')

        self.__head=self.__head.next
        size-=1
        if self.isEmpty() :
            self.__tail = None
        else :
            self.__head.prev = None
    
    def removelast(self):
        if self.isempty():
            raise Exception('Empty list')
        self.__tail=self.__tail.prev
        size-=1
        if self.isempty():
            self.__head=None
        else:
            self.__tail.next=None
    
l=Doublylinkedlist()
print(len(l))
print(l.size())
print(l.isempty())
l.append(5)
l.append(10)
print(l.isempty())
print(l.size())
l.addlast(25)
print(l.isempty())
print(l.size())
l.addfirst(10)
print(l.size())