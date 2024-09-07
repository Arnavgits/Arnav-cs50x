from cs50 import get_string

str = get_string("Text:")

Total_letters = 1
Total_sentences = 0

for char in str:
    if char == " ":
        Total_letters += 1

    if char == "." or char == "!" or char == "?":
        Total_sentences += 1

Index_number = 0.0588 * L - 0.296 * S - 15.8


