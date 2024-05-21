class Node:
    def __init__(self,data,next=None):
        self.__data=data
        self.__next=next
class Stack:
    def __init__(self):
        self.__size=0
        self.__head=None
    def size(self)->int:
        return self.__size
    
    def isempty(self)->bool:
        return self.size()==0
    def push(self,val):
        new_node = Node(val,self.__head)
        self.__head =new_node
        self.__size+=1
    def pop(self):
        if(self.isempty()):
            raise Exception("Stack underflow")
        data =self.__head.__data
        temp=self.__head
        self.__head=self.__head.__next
        del temp
        self.__size-=1
        return self.__data
    def top(self):
        if(self.isempty()):
            raise Exception("stack underflow")
        return self.__head.__data
    
    

