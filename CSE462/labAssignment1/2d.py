
import numpy as np
src = """
        JGRMQOYGHMVBJ WRWQFPW HGF FDQGFPFZR KBEEBJIZQ QO CIBZK.
LFAFGQVFZFWW, EOG WOPF GFHWOL PHLR LOLFDMFGQW BLWBWQ OL
KFWBYLBLY LFS FLJGRMQBOL WJVFPFW QVHQ WFFP QO QVFP QO CF
POGF WFJIGF QVHL HLR OQVFG WJVFPF OL FHGQV. QVF ILEOGQILHQF
QGIQV VOSFAFG BW QVHQ WIJV WJVFPFW HGF IWIHZZR QGBABHZ QO
CGFHX.
    """

dest = ""

fre = {
        'A':0,'B':0,'C':0,'D':0,'E':0,
        'F':0,'G':0,'H':0,'I':0,'J':0,
        'K':0,'L':0,'M':0,'N':0,'O':0,'P':0,
        'Q':0,'R':0,'S':0,'T':0,'U':0,
        'V':0,'W':0,'X':0,'Y':0,'Z':0
    }
def freq(src):
    print('freq distribution')
    for i in src:
        for j in i:
            if fre.get(j)!=None:
                fre[j] += 1
    keys = list(fre.keys())
    values = list(fre.values())
    sorted_value_index = np.array(values).argsort()[-26:][::-1]
    sorted_dict = {keys[i]: values[i] for i in sorted_value_index}

    for i in sorted_dict:
        print('        ',end='')
        print(i,end=':')
        print(sorted_dict[i])



mapping = {
            '.':'.',',':',','\n':'\n','-':'-',
            'Q':'T','V':'H','F':'E','O':'O',
            'H':'A','G':'R','I':'U','S':'W',
            'A':'V','P':'M','L':'N','E':'F',
            'R':'Y','W':'S','J':'C','M':'P',
            'Y':'G','B':'I','D':'X','Z':'L',
            'K':'D','C':'B','X':'K'
        }
   
def algo(src,mapping):
    print("decrypted text:")
    for i in src:
        for j in i:
            if j !=' ':
                if mapping.get(j):
                    print(mapping[j],end='')
                else:
                    print('*',end='')
            else:
                print(" ",end='')
    print()
        
print('        ---------------------------------------------------------')
freq(src)
def decipher():
    print('\n        ---------------------------------------------------------\n')
    algo(src,mapping)    
    print('        ---------------------------------------------------------')

decipher()