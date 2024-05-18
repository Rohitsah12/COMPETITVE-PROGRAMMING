class DynamicArray:
    def __init__(self, resize_factor=1.5):
        self.data = []
        self.size = 0
        self.capacity = 1
        self.resize_factor = resize_factor

    def __resize(self, new_capacity):
        self.data.extend([None] * (new_capacity - self.capacity))
        self.capacity = new_capacity

    def insert(self, index, value):
        if index > self.size or index < 0:
            raise IndexError("Index out of range")
        if self.size == self.capacity:
            self.__resize(int(self.capacity * self.resize_factor))
        self.data.insert(index, value)
        self.size += 1

    def delete(self, index):
        if index >= self.size or index < 0:
            raise IndexError("Index out of range")
        self.data.pop(index)
        self.size -= 1

    def get_size(self):
        return self.size

    def is_empty(self):
        return self.size == 0

    def rotate_right(self, k):
        if self.size == 0:
            return
        k %= self.size
        self.data = self.data[-k:] + self.data[:-k]

    def reverse(self):
        self.data = self.data[::-1]

    def append(self, value):
        if self.size == self.capacity:
            self.__resize(int(self.capacity * self.resize_factor))
        self.data.append(value)
        self.size += 1

    def prepend(self, value):
        self.insert(0, value)

    def merge(self, other):
        while self.size + len(other) > self.capacity:
            self.__resize(int(self.capacity * self.resize_factor))
        self.data.extend(other)
        self.size += len(other)

    def interleave(self, other):
        result = DynamicArray()
        min_size = min(self.size, len(other))
        for i in range(min_size):
            result.append(self.data[i])
            result.append(other[i])
        for i in range(min_size, self.size):
            result.append(self.data[i])
        for i in range(min_size, len(other)):
            result.append(other[i])
        return result

    def middle(self):
        if self.is_empty():
            raise IndexError("Array is empty")
        return self.data[self.size // 2]

    def index_of(self, value):
        try:
            return self.data.index(value)
        except ValueError:
            return -1

    def split(self, index):
        if index > self.size or index < 0:
            raise IndexError("Index out of range")
        left = DynamicArray()
        right = DynamicArray()
        left.data = self.data[:index]
        right.data = self.data[index:]
        left.size = index
        right.size = self.size - index
        left.capacity = index
        right.capacity = self.size - index
        return left, right

    def set_resize_factor(self, factor):
        self.resize_factor = factor

    def __str__(self):
        return str(self.data[:self.size])

# Example usage
arr = DynamicArray()
arr.append(1)
arr.append(2)
arr.append(3)
arr.append(4)
print(arr)

arr.insert(2, 5)
print(arr)

arr.delete(3)
print(arr)

print("Size:", arr.get_size())
print("Is Empty:", arr.is_empty())

arr.rotate_right(2)
print(arr)

arr.reverse()
print(arr)

arr.prepend(0)
print(arr)

arr2 = DynamicArray()
arr2.append(6)
arr2.append(7)

arr.merge(arr2)
print(arr)

interleaved = arr.interleave([8, 9, 10])
print(interleaved)

print("Middle Element:", arr.middle())
print("Index of 3:", arr.index_of(3))
print("Index of 100:", arr.index_of(100))

left, right = arr.split(3)
print("Left:", left)
print("Right:", right)
