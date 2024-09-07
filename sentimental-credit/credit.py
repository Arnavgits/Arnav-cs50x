from cs50 import get_int


def main():
    number = get_int("Credit card number: ")

    if valid_card(number):
        card_type = get_type(number)
    else:
        print("INVALID")


def valid_card(number):

sum = 0
ctr = 0

while number > 0:

    last_digit = int(number/10)

    if ctr % 2 == 0:
        sum += last_digit
    else:
        doubled = 2 * last_digit
        if doubled > 9:
            sum += int(doubled/10) + doubled % 10
        else:
            sum += doubled
            



    while number > 0:
        remainder = number % 100
        left = 2 * int(remainder / 10)
        if left > 9:
            ctr = ctr + int(left/10) + left % 10
        else:
            ctr = ctr + left

        number = int(number / 100)
    break

print(ctr)


# american express , master card, visa
