class Node:
    def __init__(self,data,prev=None,next=None):
        self.data=data
        self.prev=prev
        self.next=next
    def __str__(self):
        return str(self.data)
class DLL:
    def __init__(self):
        self.__head=None
        self.__tail=None
        self.__size=0;
# append(elem)
# addfirst(elem)
# addat(index,elem)
# removeFirst()
# removelast()
# removeat(index)
# size()
# indexof(elem)
# __str__()
# isempty()
# contains(elem)
    def size(self):
        return self.__size
    
    def isempty(self):
        return self.size()==0
    
    def append(self,data):
        newNode=Node(data)
        if(self.isempty()):
            self.__head=newNode
            self.__tail=newNode
        else:
            self.__tail.next=newNode
            newNode.prev=self.__tail
            self.__tail=newNode
        self.__size+=1

    def __str__(self):
        l=[]
        trav=self.__head
        while trav is not None:
            l.append(str(trav.data))
            trav=trav.next
        return '<----->'.join(l)
list=DLL()
print(list.size())
print(list.isempty())
list.append(5)
list.append(6)
list.append(7)
list.append(45)
print(list)
