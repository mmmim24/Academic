import random
import math
import timeit

def is_prime(n):
    if n == 2:
        return True
    if n % 2 == 0 or n == 1:
        return False
    for i in range(3, math.isqrt(n)+1, 2):
        if n % i == 0:
            return False
    return True

def generate_prime(k):
    global n 
    while(True):
        n = random.Random().randint(0, 1<<k)
        if is_prime(n):
            return n

def mod_inverse(a, b):
    m0,t1,t2 = b,0,1
    while a > 1 and b!=0:
        q = a//b
        b,a = a%b,b
        t1,t2 = t2 - q*t1,t1
    if t2<0:
        return t2+m0
    else:
        return t2

def generate_keypair(k):
    p = generate_prime(k)
    q = generate_prime(k)
    n = p * q
    phi = (p - 1) * (q - 1)
    e = generate_prime(k)
    # print(f'phi = {phi}')
    # print(f'e = {e}')
    d = mod_inverse(e, phi)
    return ((e, n), (d, n))

def encrypt(text, public_key):
    e, n = public_key
    encrypted_text = [0 for _ in range(len(text))]
    for i in range(len(text)):
        encrypted_text[i] = pow(ord(text[i]), e, n)
    return encrypted_text

def decrypt(encrypted_text, private_key):
    d, n = private_key
    text = ['0' for _ in range(len(encrypted_text))]
    for i in range(len(encrypted_text)):
        text[i] = chr(pow(encrypted_text[i], d, n))

    decrypted_text = ''.join(text)
    return decrypted_text

def main():
    k = int(input("Bit Size = "))
    public_key, private_key = generate_keypair(k//2)
    print("\n\nPublic Key: (e,n) =", public_key)
    print("Private Key: (d,n) =", private_key)
    
    text = input("\n\nPlain Text:\n")
    encrypted_text = encrypt(text, public_key)
    print("Encrypted Text(ASCII):\n", encrypted_text)
    
    decrypted_text = decrypt(encrypted_text, private_key)
    print("Decrypted Text:\n", decrypted_text)

    print("\n\nExecution Time:")
    print("Key Generation:",timeit.timeit(lambda: generate_keypair(k//2), number=1),"sec")
    print("Encryption:",timeit.timeit(lambda: encrypt(text, public_key), number=1),"sec")
    print("Decryption:",timeit.timeit(lambda: decrypt(encrypted_text, private_key), number=1),"sec")

if __name__ == "__main__":
    main()
