def maxelementinbitonicarray(A):
    low=1
    high=len(A)-2
    while(low<=high):
        mid=(high+low)//2
        if (A[mid-1]<A[mid]) and (A[mid]>A[mid+1]):
            return mid
        elif A[mid-1]<A[mid] and A[mid]<A[mid+1]:
            low=mid+1
        else:
            high=mid-1
    return mid
A=[1,4,10,8,6,2]
print(maxelementinbitonicarray(A))