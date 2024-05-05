n = int(input())  # Number of rooms
count = 0  # Initialize the count of rooms with enough space
#rohit kumar sah
for _ in range(n):
    p, q = map(int, input().split())  # Number of people already in the room, room's capacity
    if q - p >= 2:  # Check if there's enough space for George and Alex
        count += 1

print(count)
