ctr = 0
while True:
    number = int(input("Credit card number: "))

    remainder = number % 100
    left = 2 * remainder / 10
    if left > 10:
        ctr = left/10 + left % 10
    else:
        ctr = ctr + left

    number = number / 100
    if number < 100:
         if number > 10:
            ctr = number/10 + number % 10
         else:
            ctr = ctr + number
        break

print(ctr)


# american express , master card, visa
