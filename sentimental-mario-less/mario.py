hashes = int(input("Enter no of hashes: "))

ctr = 0
ctr2 = hashes
for i in range(hashes):
    print()
    ctr += 1 and ctr <= hashes
    ctr2 -= 1
    for i in range(ctr2):
        print(' ', end = '')
    for i in range(ctr):
        print("#", end = '')

