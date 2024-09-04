current = 0
previous = 0

for i in range(10):
    sum = current + previous
    print(f"Current number {current} Previous number {previous} Sum: {sum}")
    previous = current
    current += 1
