while True:
    try:
        height = int(input("height: "))
        if height >= 1 and height <= 8:
            break
    except:
        print("" , end= "")

for i in range(height):

    for j in range(height - j - 1):
        print(" ", end = "")
