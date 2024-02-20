def findMax(A):
    low=0
    high=len(A)-1
    while(low<=high):
        mid=(low+high)//2
        if A[mid-1]<A[mid] and A[mid]>A[mid+1]:
            return mid
        elif A[mid-1]<A[mid] and A[mid]<A[mid]:
            low=mid+1
        else:
            high=mid-1
    return mid
def inc(findmax(A)):
    low=0
    high=findMax(A)
    while(low<=high):
        if(A[mid]==target):
            Swap
            