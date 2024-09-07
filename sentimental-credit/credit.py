from cs50 import get_int

ctr = 0
while True:
    number = get_int("Credit card number: ")

    while number > 0:
        remainder = number % 100
        left = 2 * int(remainder / 10)
        if left > 9:
            ctr = int(left/10) + left % 10
        else:
            ctr = ctr + left

        number = int(number / 100)
    break

print(ctr)


# american express , master card, visa
