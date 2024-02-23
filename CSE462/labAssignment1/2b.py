
import numpy as np
src = """
        exupziu kxwqxagxom, upm gxsm zs l amtwzo exgg rmqzfm kigg
lok xolquxjm.lgwz, l kxwqxagxomk amtwzo qlo qzoutzg lok plokgm
upm wxuiluxzo zs gxjxoh xo l wzapxwuxqlumk elc uplo upzwm epz
kz ozu.fztmzjmt, xs czi pljm l aglo lok czi elou
uz xfagmfmou xu xo czit gxsm upmo czi ommk kxwqxagxom.
xu flnmw upxohw mlwc szt czi uz plokgm lok iguxflumgc
rtxoh wiqqmww uz czit gxsm.xs ulgn lrziu upm ucamw zs
kxwqxagxom, upmo upmc ltm hmomtlggc zs uez ucamw. sxtwu zom

xw xokiqmk kxwqxagxom lok upm wmqzok zom xw wmgs-
kxwqxagxom.xokiqmk kxwqxagxom

xw wzfmupxoh uplu zupmtw ulihpu iw zt em gmlto rc
wmmxoh zupmtw. epxgm wmgs-kxwqxagxom qzfmw stzf exupxo lok
em gmlto xu zo zit zeo wmgs. wmgs-kxwqxagxom tmyixtmw l gzu
zs fzuxjluxzo lok wiaaztu stzf zupmtw.lrzjm lgg, szggzexoh czit klxgc
wqpmkigm exupziu loc fxwulnm xw lgwz altu zs rmxoh kxwqxagxomk.
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
            '.':'.',',':',','\n':'\n','-':'-',
            'u':'t','p':'h','m':'e','g':'l','l':'a',
            'z':'o','s':'f','x':'i',
            'e':'w','i':'u','o':'n','h':'g',
            'c':'y','k':'d','t':'r','a':'p',
            'j':'v',
            'w':'s','q':'c','r':'b','f':'m',
            'n':'k','y':'q'
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