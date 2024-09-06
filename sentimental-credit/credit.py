ctr = 0
while True:
    number = int(input("Credit card number: "))

    remainder = number % 100
    if 2 * remainder / 10 > 10:
        
    ctr = ctr + 2 * (remainder/10)
    number = number / 100
    if number < 100:
        ctr = ctr + 2 * (number/10)
        break

print(ctr)


# american express , master card, visa
