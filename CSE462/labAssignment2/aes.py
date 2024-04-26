import time
from BitVector import *
from BitVector_Helper import *
from BitVector_Helper import *
from BitVector import *
key="Thats my Kung Fu"
plainText="Two One Nine Two"
RoundConstants = [BitVector(intVal=0x01, size=8), BitVector(intVal=0x02, size=8), BitVector(intVal=0x04, size=8), BitVector(intVal=0x08, size=8), BitVector(intVal=0x10, size=8), BitVector(intVal=0x20, size=8), BitVector(intVal=0x40, size=8), BitVector(intVal=0x80, size=8), BitVector(intVal=0x1b, size=8), BitVector(intVal=0x36, size=8)]

hex = BitVector(textstring=key)
w=[]
for i in range(0,128,32):
    w.append([hex[i:i+8],hex[i+8:i+16],hex[i+16:i+24],hex[i+24:i+32]])

def g(word,round):
    w = word.copy()
    s = w[0]
    for i in range(3):
        w[i]=w[i+1]
    w[3]=s
    for i in range(4):
        w[i]=(BitVector(intVal=Sbox[w[i].intValue()],size=8))
    w[0]=w[0]^RoundConstants[round]
    return w

# for i in w:
#     for j in i:
#         print(j.get_bitvector_in_hex().upper(),end=" ")
#     print()
# print()

# for i in range(4):
#     for j in range(4):
#         print(w[i][j],end=" ")
#     print()
# print()

# for i in range(4):
#     print(w[3][i].get_bitvector_in_hex().upper(),end=" ")
# print()


def RoundKeyGeneration(w):
    z = w.copy()
    for i in range(4):
        for j in range(4):
            print(f'w[{i}][{j}] = {z[i][j].get_bitvector_in_hex().upper()}',end=" ")
        print()
    for i in range(4,44):
        if i%4==0:
            print(i)
            x = g(z[i-1],(i//4)-1)
            for j in range(4):
                print(x[j].get_bitvector_in_hex().upper(),end=" ")
            print()
            for j in range(4):
                x[j] = x[j]^z[i-4][j]
                print(x[j],end=" ")
                print(f'w[{i}][{j}] = {x[j].get_bitvector_in_hex().upper()}',end=" ")
            # z.append(x)
                # x = x ^ BitVector(intVal=z[i-4][j], size=8)

        else:
            x = z[i-1]
            for j in range(4):
                x[j] = z[i-1][j]^z[i-4][j]
                print(f'w[{i}][{j}] = {x[j].get_bitvector_in_hex().upper()}',end=" ")
            # z.append(x)
                # x = x ^ BitVector(intVal=z[i-4][j], size=8)
        z.append(x)
        print(z[i][3].get_bitvector_in_hex().upper(),end="\n")
    print()
    for i in range(44):
        for j in range(4):
            print(f'w[{i}][{j}] = {z[i][j].get_bitvector_in_hex().upper()}',end=" ")
        print()

    return z

# w.append(w[0]^g(w[3],0))
# x = g(w[3],0)
# for i in range(4):
#     print(x[i].get_bitvector_in_hex().upper(),end=" ")
print('\n--')
# for i in range(4):
#     print(w[3][i].get_bitvector_in_hex().upper(),end=" ")
# print()
# print(type(x[0].intValue()))
# print(type(w[0][0].intValue())) 
# for j in range(4):
#     x[j] = x[j]^w[0][j]
z = RoundKeyGeneration(w)
# w.append(x)



# for i in range(4):
#     print(x[i].get_bitvector_in_hex().upper(),end=" ")
print('\n--\n')
# for i in range(4):
#     print(w[4][i].get_bitvector_in_hex().upper(),end=" ")
# print()

for i in range(44):
    for j in range(4):
        print(z[i][j].get_bitvector_in_hex().upper(),end=" ")
    print()
print()

print(RoundConstants[0])
