while True:
    number = int(input("Credit card number: "))
    if number == 13 or number == 15 or number == 16:
        break

# american express , master card, visa

if number[1] == 3 and number[2] == 4 :
    print("american express")
