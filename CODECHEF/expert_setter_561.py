# Function to determine if Munchy is an expert
def is_expert(X, Y):
    approval_percentage = (Y / X) * 100
    return approval_percentage >= 50

# Main function
def main():
    # Input the number of test cases
    T = int(input())

    # Iterate through each test case
    for _ in range(T):
        # Input X and Y for the current test case
        X, Y = map(int, input().split())

        # Check if Munchy is an expert for the current test case
        if is_expert(X, Y):
            print("YES")
        else:
            print("NO")

# Execute the main function
if __name__ == "__main__":
    main()
