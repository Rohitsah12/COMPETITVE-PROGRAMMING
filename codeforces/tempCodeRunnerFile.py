def max_sum_after_operations(n, a):
    positive_sum = sum(x for x in a if x > 0)
    abs_sum = sum(abs(x) for x in a)
    max_negative = max(abs(x) for x in a if x < 0)
    
    return positive_sum + (max_negative if positive_sum == 0 else abs_sum)

t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    print(max_sum_after_operations(n, a))
