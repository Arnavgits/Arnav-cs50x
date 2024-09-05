from cs50 import get_float

 # coins of 25 - quarter ,10 - dime ,5 - nickel ,1 - penny units
amount = get_float("Amount: ")

quarter = 0
dime = 0
nickel = 0
penny = 0

while True:
    if amount % 25 >= 1:
        quarter += 1
        amount - 25
    elif:
        break

