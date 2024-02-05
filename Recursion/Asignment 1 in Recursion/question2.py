def question2(n):
    if n==0:
        return
    question2(n-1)
    print(n,"\n")
    return
x=int(input())
question2(x)


