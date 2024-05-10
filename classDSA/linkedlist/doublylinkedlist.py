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
    
l=Doublylinkedlist()
print(len(l))