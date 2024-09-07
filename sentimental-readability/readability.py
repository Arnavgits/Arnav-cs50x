from cs50 import get_string

str = get_string("Text:")

letters = 0
words = 1
sentences = 0

for char in str:
    if char == " ":
        words += 1

    if char == "." or char == "!" or char == "?":
        sentences += 1

    if char != " " and char != "?" and char != "!" and char != ".":
        letters += 1

L = (letters/words) * 100
S = (sentences/words) * 100

Index_number = 0.0588 * L - 0.296 * S - 15.8

if Index_number >= 16:
    print("Grade 16+")
elif Index_number < 1:
    print("Before Grade 1")
else:
    print(f"Grade {Index_number}")
