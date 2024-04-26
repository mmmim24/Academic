from BitVector_Helper import *
from BitVector import *
import timeit 
RoundConstants = [
        ['0x01','0x00','0x00','0x00'],
        ['0x02','0x00','0x00','0x00'],
        ['0x04','0x00','0x00','0x00'],
        ['0x08','0x00','0x00','0x00'],
        ['0x10','0x00','0x00','0x00'],
        ['0x20','0x00','0x00','0x00'],
        ['0x40','0x00','0x00','0x00'],
        ['0x80','0x00','0x00','0x00'],
        ['0x1b','0x00','0x00','0x00'],
        ['0x36','0x00','0x00','0x00'],
    ]
def Subst(state):
    mat = []
    for i in state:
        j = int(i,16)
        mat.append(hex(Sbox[j]))
    # print(mat)
    return mat

def InvSubst(state):
    mat = []
    for i in state:
        j = int(i,16)
        mat.append(hex(InvSbox[j]))
    # print(mat)
    return mat

def Shift(state):  
    for i in range(0, 4):
        row = [i, i+4, i+8, i+12]
        row_val = [state[row[0]],state[row[1]],state[row[2]],state[row[3]]]
        for j in range(0, 4):
            new = (j - i)%4
            state[row[new]] = row_val[j]
    # print(state)
    return state 

def invShift(state):  
    for i in range(0, 4):
        row = [i, i+4, i+8, i+12]
        row_val = [state[row[0]],state[row[1]],state[row[2]],state[row[3]]]
        for j in range(0, 4):
            new = (j + i)%4
            state[row[new]] = row_val[j]
    # print(state)
    return state 

def Mix(state):  
    mat = []
    for k in range(0,4):
        for i in range(0,4):  
            col = [k*4,(k*4)+1,(k*4)+2,(k*4)+3]
            res = []
            for j in range(4): 
                val = Mixer[i][j].gf_multiply_modular(BitVector(hexstring = state[col[j]][2:]),AES_modulus, 8)
                res.append(int(val.getHexStringFromBitVector(),16))
            mat.append(hex(res[0] ^ res[1] ^ res[2] ^ res[3]))
    # print(mat)
    return mat

def InvMix(state):
    mat = []
    for k in range(0,4): 
        for i in range(0,4):  
            col = [k*4,(k*4)+1,(k*4)+2,(k*4)+3]
            res = []
            for j in range(4): 
                val = InvMixer[i][j].gf_multiply_modular(BitVector(hexstring = state[col[j]][2:]),AES_modulus, 8)
                res.append(int(val.getHexStringFromBitVector(),16))
            mat.append(hex(res[0] ^ res[1] ^ res[2] ^ res[3]))
    # print(mat)
    return mat


def addRoundKey(state, key):
    mat = []
    for i in range(len(state)):   
        mat.append(hex(int(state[i],16)^int(key[i],16)))
    # print(mat)
    return mat

def inHex(str):
    res = ""
    for i in str:
        res += hex(ord(i))[2:]
    return res

def hexMat(str):
    matrix = []
    for i in range(16):
        matrix.append(hex(ord(str[i])))
    return matrix 

def genRoundKey(key,RoundConstants):
    r0 = [key[0],key[1],key[2],key[3]]
    r1 = [key[4],key[5],key[6],key[7]]
    r2 = [key[8],key[9],key[10],key[11]]
    r3 = [key[12],key[13],key[14],key[15]]
    # circular left shift
    g = [key[13],key[14],key[15],key[12]]
    # byte substitution
    for i in range(4):  
        g[i] = hex(Sbox[int(g[i],16)])
    # XOR with round constant
    for i in range(4):   
        g[i] = hex(int(g[i],16) ^ int(RoundConstants[i],16))
    
    r4 = r5 = r6 = r7 = []
    res_key = []

    for i in range(4):
        r4.append(hex(int(g[i],16) ^ int(r0[i],16)))
    for i in r4: res_key.append(i)
    for i in range(4):
        r5.append(hex(int(r4[i],16) ^ int(r1[i],16)))
    for i in r5: res_key.append(i)
    for i in range(4):
        r6.append(hex(int(r5[i],16) ^ int(r2[i],16)))
    for i in r6: res_key.append(i)
    for i in range(4):
        r7.append(hex(int(r6[i],16) ^ int(r3[i],16)))
    for i in r7: res_key.append(i)
    return res_key

def encrypt(plaintext,roundKey):
    encryption = ""
    if(len(plaintext)%16):
        for i in range(16-(len(plaintext)%16)):
            plaintext += "*"
    # print(plaintext)
    for i in range(0, len(plaintext), 16):
        block = plaintext[i:i+16]
        state = hexMat(block)
        state = addRoundKey(state,roundKey[0])
        for i in range(1,11):
            state = Subst(state)
            state = Shift(state)
            if(i < 10): state = Mix(state)
            state = addRoundKey(state,roundKey[i])
        for i in state:
            encryption += chr(int(i,16))
    # print(encryption)
    return encryption
            
    
def decrypt(ciphertext,roundKey,sz):
    decryption = ""
    for i in range(0, len(ciphertext), 16):
        block = ciphertext[i:i+16]
        state = hexMat(block)
        state = addRoundKey(state,roundKey[10])
        for i in reversed(range(10)):
            state = invShift(state)
            state = InvSubst(state)
            state = addRoundKey(state,roundKey[i])
            if(i > 0): state = InvMix(state)
        
        for i in range(len(state)):
            decryption += chr(int(state[i],16))   
    # print(decryption)
    return decryption[0:sz]

def keygeneration(key):
    RoundConstants = [
        ['0x01','0x00','0x00','0x00'],
        ['0x02','0x00','0x00','0x00'],
        ['0x04','0x00','0x00','0x00'],
        ['0x08','0x00','0x00','0x00'],
        ['0x10','0x00','0x00','0x00'],
        ['0x20','0x00','0x00','0x00'],
        ['0x40','0x00','0x00','0x00'],
        ['0x80','0x00','0x00','0x00'],
        ['0x1b','0x00','0x00','0x00'],
        ['0x36','0x00','0x00','0x00'],
    ]
    round_keys = []
    round_keys.append(hexMat(key))
    for i in range(10):
        round_keys.append(genRoundKey(round_keys[i],RoundConstants[i]))
    return round_keys

def main():
    
    print("\nKey:")
    key = input("In ASCII:")
    print("In HEX:",inHex(key))
    print()
    
    print("Plaintext:")
    plaintext = input("In ASCII:")
    print("In HEX:",inHex(plaintext))
    print()
    

    roundKey = keygeneration(key)
    
    encrypted_text = encrypt(plaintext,roundKey)
    decrypted_text = decrypt(encrypted_text,roundKey,len(plaintext))
    print("Cipher Text:")
    print("In ASCII:",encrypted_text)
    print("In HEX:",inHex(encrypted_text))
    print()
    
    print("Decipher Text:")
    print("In ASCII:",decrypted_text)
    print("In HEX:",inHex(decrypted_text))
    print()
    
    print("Execution Time:")
    print("Key Scheduling:",timeit.timeit(lambda: genRoundKey(roundKey[1],RoundConstants[1]), number=10),"sec")
    print("encrypt Time:",timeit.timeit(lambda: encrypt(plaintext,roundKey), number=1),"sec")
    print("decrypt Time:",timeit.timeit(lambda: decrypt(encrypted_text,roundKey,len(plaintext)),number=1),"sec")
    
if __name__ == "__main__":
    main()
    
    

   
   
    