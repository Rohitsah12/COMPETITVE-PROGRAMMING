#Rohit Kumar sah
def count_lucky_digits(n):
    count = 0
    while n > 0:
        digit = n % 10
        if digit == 4 or digit == 7:
            count += 1
        n //= 10
    return count

def is_lucky_number(num):
    return num == 4 or num == 7

def is_nearly_lucky(n):
    lucky_digit_count = count_lucky_digits(n)
    return is_lucky_number(lucky_digit_count)
# Read input
n = int(input())

# Check if n is nearly lucky
if is_nearly_lucky(n):
    print("YES")
else:
    print("NO")
