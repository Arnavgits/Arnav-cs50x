from cs50 import get_float

 # coins of 25 - quarter ,10 - dime ,5 - nickel ,1 - penny units
 while True:
    amount = get_float("Amount: ")

quarter = 0
dime = 0
nickel = 0
penny = 0

while amount >= 0.25:
    quarter += 1
    amount -= 0.25

while amount >= 0.10:
    dime += 1
    amount -= 0.10

while amount >= 0.05:
    nickel += 1
    amount -= 0.05

while amount >= 0.01:
    penny += 1
    amount -= 0.01

Total_coins = quarter + dime + nickel + penny

print(Total_coins)

