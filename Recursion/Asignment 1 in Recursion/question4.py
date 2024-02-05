def fibonacci(n):
    if n<1:
        return 0
    if n==1:
        return 1
    return fibonacci(n-2)+fibonacci(n-1)
x=int(input())
y=fibonacci(x)
print(y,"\n")

