import numpy as np
txt = 'ACT'
key = 'GYBNQKURP'
deciphertext = ''
l = len(txt)

def encrypt():
    txtMat = np.array([0 for _ in range(l)])
    keyMat = np.array([[0 for _ in range(l)] for _ in range(l)])

    for i in range(l):
        txtMat[i] = ord(txt[i])-ord('A')
        for j in range(l):
            keyMat[i][j] = ord(key[i*l+j])-ord('A')

    cipherMat = np.matmul(keyMat,txtMat)%26
    # decipherMat = np.matmul(keyMat,np.linalg.inv(cipherMat))%26

    # print(txtMat,end='\n\n')
    # print(keyMat,end='\n\n')
    # print(cipherMat,end='\n\n')

    ciphertext = ''
    for i in range(l):
        ciphertext += chr(cipherMat[i]+ord('A'))

    print(ciphertext)

encrypt()
# print(np.linalg.inv(keyMat)*np.linalg.det(keyMat)%26,end='\n\n')
# print(decipherMat)