def f(n):
    if n==0 or n==1:
        return 1
    return n*f(n-1)

x=int(input())
y=f(x)
print(y)
    