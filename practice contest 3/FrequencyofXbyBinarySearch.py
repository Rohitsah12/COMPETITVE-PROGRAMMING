def lowerbound(A,x):
    low=0
    high=len(A)-1
    ans=len(A)
    while(low<=high):
        mid=(low+high)//2
        if(A[mid]<x): 
            low=mid+1
        else: 
            high=mid-1
            ans=mid
    return ans
def upperbound(A,x):
    low1=0
    high1=len(A)-1
    ans1=len(A)
    while(low1<=high1):
        mid1=(low1+high1)//2
        if(A[mid1]<=x): 
            low1=mid1+1
            ans1=mid1
        else: 
            high1=mid1-1
    return ans1
A=[1,2,3,4,4,4,4,5,6,7,8]
x=4
lbnd=lowerbound(A,x)
ubnd=upperbound(A,x)
print(ubnd-lbnd+1)
