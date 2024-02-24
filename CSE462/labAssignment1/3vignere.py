plaintext = "CSE FINAL YEAR THEORY COURSE INTRODUCTION TO COMPUTER SECURITY AND FORENSICS"
key = "SUSTCSE"
keygen = ""

j = 0
for i in range(len(plaintext)):
    if(plaintext[i]==' '):
        keygen += plaintext[i]
    else:
        keygen += key[j]
        j+=1
    if(j==len(key)):
        j=0

print(keygen)
print(plaintext)

def encrypt(plaintext,key):
    cipher = ""
    for i in range(len(plaintext)):
        if plaintext[i]!=' ':
            e = ord('A')+(ord(plaintext[i])+ord(key[i]))%26
            cipher+= chr(e)
        else:
            cipher+=plaintext[i]
    return cipher

def decrypt(cipher,key):
    decipher=""
    for i in range(len(cipher)):
        if cipher[i]!=' ':
            e = ord('A')+(ord(cipher[i])-ord(key[i]))%26
            decipher+= chr(e)
        else:
            decipher+=cipher[i]
    return decipher

cipher = encrypt(plaintext,keygen)
print(cipher)
decipher = decrypt(cipher,keygen)
print(decipher)
