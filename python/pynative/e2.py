current = 0
previous = 0

sum = current + previous

for i in range(10):
    print(f"Current number {current} Previous number {previous} Sum: {sum}")
    previous = current
    current += 1
