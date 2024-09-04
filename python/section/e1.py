books = []

for i in range(3):
    book = dict()
    book["author"] = input("author: ")
    book["title"] = input("title: ")
    books.append(book)


for book in books:
    print(book["title"])
    print(book["author"])
