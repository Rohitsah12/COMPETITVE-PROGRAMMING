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
A=[1,2,3,4,5,6,7,4,2,1]
print(maxelementinbitonicarray(A))