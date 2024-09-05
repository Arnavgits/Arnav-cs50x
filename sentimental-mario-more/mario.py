while True:
    try:
        height = int(input("height: "))
        if height >= 1 and height <= 8:
            break
    except:
        print("" , end= "")

