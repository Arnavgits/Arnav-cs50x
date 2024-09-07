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


    print(sum)
    return sum % 10 == 0

def get_type(number):

    if str(number)[0:2] == 34 or 37:
        print("American Express")
    elif str(number)[0:2] == [51,52,53,54,55]:
        print("MasterCard")
    else:
        print("Visa")

if __name__ == "__main__":
    main()

