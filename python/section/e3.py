import csv

books = []

with open("book1.csv") as file:
    reader = csv.DictReader(file)
    for row in reader:
        print(row)
