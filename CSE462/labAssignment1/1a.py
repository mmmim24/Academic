src = "ZKDW GR BRX JHW ZKHQ FURVV D VQRZPDQ ZLWK D YDPSLUH? IURVWELWH"

key = 23

def caesar(key,ciphertext):
    for i in range(len(ciphertext)):
        if(ord(src[i])>=65 and ord(src[i])<=90):
            print(chr(65 + (ord(src[i]) - 65 + key) % 26),end='')
        else:
            print(src[i],end='')
    print()
    
caesar(key,src)