from cs50 import get_string

str = get_string("Text:")

Total_letters = 1
Total_sentences = 0

for char in str:
    if char == " ":
        Total_letters += 1

    if char == "." or char == "!" or char == "?":
        Total_sentences += 1

L = Total_letters/100
S = Total_sentences/100

Index_number = 0.0588 * L - 0.296 * S - 15.8

if Index_number >= 16:
    print("Grade 16+")
elif Index_number < 1:
    print("Before Grade 1")
else:
    print(f"Grade {Index_number}")
