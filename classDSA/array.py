class MyArray:
    def __init__(self,capacity:int):
        self.__capacity=capacity
        self.__size=0
        self.__data=[]*capacity
    def __getitem__(self,index:int)->int:#return integer 
        if index>=0 and index<self.__size:
            return self.__data[index]
        else:
            raise IndexError("Index out of bond")
    def __setitem__(self,index,value):
        self.__item[index]=value
    def __len__(self):
        return self.__size
    def __resize__(self):
        newarray=[None]*(2*self.__capacity)
        for i in range(self.__size):
            newarray[i]=self.__data[i]
            self.__capacity=2*self.__capacity
            self.__data=newarray
    def append(self,value):
        if self.__size < self.__capacity:
            self.__data[self.__size]==value
            self.__size+=1
        else:
            self.__resize__()
            self.__data[self.__size]=value
            self.__size+=1

a=MyArray(5)