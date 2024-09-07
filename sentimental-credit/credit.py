from cs50 import get_int

ctr = 0
while True:
    number = get_int("Credit card number: ")

    while True:
        remainder = number % 100
        left = 2 * remainder / 10
        if left > 9:
            ctr = left/10 + left % 10
        else:
            ctr = ctr + left

        number = number / 100
        if number < 100:
            if number > 9:
                ctr = ctr + number / 10
            break
    break


print(ctr)


# american express , master card, visa
