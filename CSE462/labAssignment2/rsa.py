import random
import math
k = int(input("Bit Size = "))

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
        n = random.Random().randint(0, 1<<(k//2))
        if is_prime(n):
            return n
        
p = generate_prime(k)
q = generate_prime(k)
e =  generate_prime(k)
n = p*q
phi = (p-1)*(q-1)


print(phi)
print(n)
      
print(f'Generating a {k/2}-bit key pair {p} and {q}')




def gcd(a, b):
    """Calculate the greatest common divisor of two numbers."""
    while b != 0:
        a, b = b, a % b
    return a

def mod_inverse(a, m):
    """Calculate the modular inverse of 'a' modulo 'm'."""
    m0, x0, x1 = m, 0, 1
    while a > 1:
        q = a // m
        m, a = a % m, m
        x0, x1 = x1 - q * x0, x0
    return x1 + m0 if x1 < 0 else x1

def generate_keypair(k):
    """Generate RSA key pair."""
    p = generate_prime(k // 2)
    q = generate_prime(k // 2)
    n = p * q
    phi = (p - 1) * (q - 1)
    
    # Choose public exponent e
    e = 65537  # Commonly used value for e
    
    # Calculate private exponent d
    d = mod_inverse(e, phi)
    
    return ((e, n), (d, n))

def encrypt(message, public_key):
    """Encrypt a message using RSA."""
    e, n = public_key
    encrypted_message = [pow(ord(char), e, n) for char in message]
    return encrypted_message

def decrypt(encrypted_message, private_key):
    """Decrypt a message using RSA."""
    d, n = private_key
    decrypted_message = [chr(pow(char, d, n)) for char in encrypted_message]
    return ''.join(decrypted_message)

def main():
    k = 16  # Key length
    public_key, private_key = generate_keypair(k)
    print("Public Key:", public_key)
    print("Private Key:", private_key)
    
    message = input("Enter a message to encrypt: ")
    encrypted_message = encrypt(message, public_key)
    print("Encrypted Message:", encrypted_message)
    
    decrypted_message = decrypt(encrypted_message, private_key)
    print("Decrypted Message:", decrypted_message)

if __name__ == "__main__":
    main()
