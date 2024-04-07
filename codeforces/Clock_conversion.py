def convert_to_12_hour_format(time):
    hour, minute = map(int, time.split(':'))
    if hour < 12:
        if hour == 0:
            return f"12:{minute:02d} AM"
        else:
            return f"{hour:02d}:{minute:02d} AM"
    elif hour == 12:
        return f"{hour:02d}:{minute:02d} PM"
    else:
        hour -= 12
        return f"{hour:02d}:{minute:02d} PM"
t = int(input().strip())

# Iterate through each test case
for _ in range(t):
    # Read the time in 24-hour format
    time = input().strip()
    
    # Convert to 12-hour format and print the result
    print(convert_to_12_hour_format(time))
