hashes = int(input("Enter no of hashes: "))

ctr = 0
for i in range(hashes):
    for i in range(hashes - 1):
        print(' ', end = '')
        ctr += 1 and ctr <= hashes
    for i in range(ctr):
        print("#", end ='')
