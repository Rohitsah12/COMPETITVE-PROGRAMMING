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
    
    def addfirst(self,data):
        newNode=Node(data)
        if self.isempty():
            self.__head=newNode
            self.__tail=newNode
        else:
            newNode.next=self.__head
            self.__head.prev=newNode
            self.__head=newNode
        self.__size+=1
    
    def addAt(self,index,data):
        if index<0 or index>self.__size:
            raise Exception("Index out of bond")
        if index==0:
            return addfirst(data)
        elif index==self.__tail:
            return append(data)
        else:
            id=0
            trav=self.__head
            while(id!=index-1):
                id+=1
                trav=trav.next
            newNode=Node(data,trav,trav.next)
            trav.next=newNode
            newNode.next.prev=newNode
            self.__size+=1
    def removefirst(self):
        if(self.isempty()):
            raise Exception("Size is 0")
        else:
            temp=self.__head
            self.__head=self.__head.next
            self.__head.prev=None
            self.__head

list=DLL()
print(list.size())
print(list.isempty())
list.append(5)
list.append(6)
list.append(7)
list.append(45)
print(list)
print(list.size())
list.addfirst(10)
print(list)
print(list.size())
list.addAt(2,25)
print(list)
print(list.size())
