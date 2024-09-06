ctr = 0
while True:
    number = int(input("Credit card number: "))
    remainder = number % 100
    ctr = ctr + (remainder/10)


# american express , master card, visa
