size = 56000

pent = []
hex = []

for i in range(size):
    pent.append((i*((3*i)-1))/2)
    hex.append(i*((2*i)-1))


count = 1
val = 0
while (count < size):
    newV = 0
    isThere = False
    index = 0

    newV = count * ((count+1)/2)

    print(str(newV) + " " + str(count))

    for i in range(size):
        if (pent[i] == newV):
            isThere = True
            index = i
            break


    isThere2 = False
    index2 = 0
    for j in range(size):
        if (hex[j] == newV):
            isThere2 = True
            index2 = j
            break


    if (isThere and isThere2):
        if (val == 0 or val == 1):
            val += 1
        else:
            print(str(newV) + " " + str(pent[index]) + " " + str(hex[index2]))
            print(str(count) + " " + str(index) + " " + str(index2))
            break
        
    
    count += 1

