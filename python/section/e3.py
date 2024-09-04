import csv

books = []

with open("b1.csv") as file:
    reader = csv.DictReader(file)
    for row in reader:
        print(row)
