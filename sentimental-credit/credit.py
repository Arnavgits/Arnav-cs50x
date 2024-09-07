from cs50 import get_int


def main():
    number = get_int("Credit card number: ")

    if valid_card(number):
        card_type = get_type(number)
        print(card_type)
    else:
        print("INVALID")


def valid_card(number):

    sum = 0
    ctr = 0

    while number > 0:

        last_digit = number % 10

        if ctr % 2 == 0:
            sum += last_digit
        else:
            doubled = 2 * last_digit
            if doubled > 9:
                sum += int(doubled/10) + doubled % 10
            else:
                sum += doubled

        ctr += 1
        number = int(number / 10)

    return sum % 10 == 0

def get_type(number):

    length = len(str(number))
    start = str(number)[:2]

    if length == 15 and (start == 34 or start == 37):
        return "AMERICAN EXPRESS"
    elif length == 16 and 51 <= start <= 55:
        return "MASTERCARD"
    elif (length == 13 or length == 16) and str(number[0]) == "4":
        return "VISA"
    else:
        return "INVALID"

if __name__ == "__main__":
    main()

