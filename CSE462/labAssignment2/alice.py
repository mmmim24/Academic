import aes
import rsa
import os
def main():
    plaintext = input("Enter message: ")
    key = input("Enter key: ")
    k = int(input("Bit Size = "))
    
    print()
    print("AES Encryption:")
    encrypted_text = aes.encrypt(plaintext,aes.keygeneration(key))
    print("Cipher Text:",encrypted_text)
    print()
    print("RSA Encryption:")
    public_key, private_key = rsa.generate_keypair(k//2)
    print("Public Key: (e,n) =", public_key)
    print("Private Key: (d,n) =", private_key)
    print()
    encrypted_text = aes.encrypt(plaintext,aes.keygeneration(key))  
    
    encr_key = rsa.encrypt(key,public_key)

    print("Encrypted Key:",encr_key)

    decr_key = rsa.decrypt(encr_key,private_key)
    print("Decrypted Key:",decr_key)

    decr_text = aes.decrypt(encrypted_text,aes.keygeneration(decr_key),len(plaintext))
    print("Decrypted Text:",decr_text)

    file = open("C:/Users/User/github/Academic/CSE462/labAssignment2/Don't Open This/PRK.txt","w")

    file.write(str(private_key))
    file.write("\n")
    file.write(str(encr_key))
    file.close()

if __name__ == "__main__":
    main()