hashes = int(input("Enter no of hashes: "))

ctr = 0
for i in range(hashes):
    ctr += 1 and ctr <= hashes
    for i in range(hashes - 1):
        print(' ', end = '')
    for i in range(ctr):
        print("#", end ='')
