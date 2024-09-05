while True:
    try:
        hashes = int(input("Height of pyramid: "))
        if hashes >= 0 and hashes <= 8:
         break
    except:
        print("", end = "")


ctr = 0
ctr2 = hashes
for i in range(hashes):
    ctr += 1 and ctr <= hashes
    ctr2 -= 1
    for i in range(ctr2):
        print(' ', end = '')
    for i in range(ctr):
        print("#", end = '')
    print()

