
import numpy as np
src = """
        gtd bsvgl vf fgedsugt dffml dkcymvsf gtmg gtd chjde ha aevdsxftvc tdycf
bf gh id fgehsu aehz tmexftvcf. aevdsxf qms uvod bf gtd fgedsugt jd sddx
jtds yvad udgf ghbut. vs mxxvgvhs, cdhcyd dkcedff bsvgl gtehbut
yhod,amzvyl, aevdsxf, msx hgtdef ftmed fghevdf ha avsxvsu qhzzhs
uehbsx jvgt fhzdhsd.gtded med zmsl idsdavgf ha fgmlvsu bsvgdx vs
ghbut gvzdf, mf vg tdycf gh amqd qtmyydsuvsu fvgbmgvhsf jvgt
qhbemud. gtd vzchegmsqd ha fgmlvsu bsvgdx tmf fgebqp m qthex mzhsu
zmsl cdhcyd gtehbuthbg tvfghel.pddcvsu zdzhevdf ha jtmg jd tmod
mqqhzcyvftdx gtehbuthbg tvfghel qms tdyc bf fdd thj vsxvovxbmyf msx
qhzzbsvgvdf tmod cdefdodedx gtehbut ghbut gvzdf msx vsgh m ievutgde
abgbed.
    """

dest = ""

fre = {
        'a':0,'b':0,'c':0,'d':0,'e':0,
        'f':0,'g':0,'h':0,'i':0,'j':0,
        'k':0,'l':0,'m':0,'n':0,'o':0,'p':0,
        'q':0,'r':0,'s':0,'t':0,'u':0,
        'v':0,'w':0,'x':0,'y':0,'z':0
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
            '.':'.',',':',','\n':'\n',
            'd':'e','g':'t','t':'h','m':'a',
            'h':'o','a':'f','i':'b','v':'i',
            'o':'v','j':'w','f':'s','s':'n',
            'z':'m','e':'r','u':'g','l':'y',
            'b':'u','c':'p','x':'d','y':'l',
            'k':'x','q':'c','p':'k'
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
        
def decipher():
    print('\n        ---------------------------------------------------------\n')
    algo(src,mapping)    
    print('        ---------------------------------------------------------')
    freq(src)
    print('        ---------------------------------------------------------')

decipher()