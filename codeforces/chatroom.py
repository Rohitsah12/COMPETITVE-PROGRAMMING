def can_say_hello(word):
    hello = "hello"
    j = 0
    for char in word:
        if char == hello[j]:
            j += 1
            if j == len(hello):
                return "YES"
    return "NO"

# Input
word = input().strip()

# Output
print(can_say_hello(word))
