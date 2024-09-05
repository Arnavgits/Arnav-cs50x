while True:
    try:
        height = int(input("height: "))
        if height >= 1 and height <= 8:
            break
    except:
        print("" , end= "")

for i in range(height):

    for j in range(height - i - 1):
        print(" ", end = "")

    for k in range(i + 1):
        print("#", end = "")

    print("  ", end ="")

    for j in range(i + 1):
        print("#", end = "")

    for k in range(height - i - 1):
        print(" ", end = "")

    print()
