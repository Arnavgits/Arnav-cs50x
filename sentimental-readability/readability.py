from cs50 import get_string

str = get_string("Text: ")

Total_letters = 0
Total_sentences = 0

for char in str:
    if char == " ":
        Total_letters += 1

    if char == "." or char == "!" or char == "?":
        Total_sentences += 1

print(Total_letters)
print(Total_sentences)
