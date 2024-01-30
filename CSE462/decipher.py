
import numpy as np
src = """
        cdrdghekrc ghryio uhghcghuwq fhr md hr dvfdxxdre phl 
        big pgkedgq ei cde ewdkg fgdhekzd bxip cikrc he ewd
        mdckrrkrc ib ewd yhl. ewd pgkedg whq ri kydh pwhe eiukf
        ewd ghryio uhghcghuw pkxx md hmiae pwdr ke huudhgq. ewkq
        bigfdq ewd pgkedg ei aqd fgdhekzkel ei fiouxded ird ib 
        ewgdd fiooir pgkekrc fwhxxdrcdq. ewd pgkedg fhr aqd ewd
        uhghcghuw hq ewd bkgqe ird ib h qwige qeigl hry makxy
        auir ke. h qdfiry iuekir kq ei aqd ewd ghryio uhghcghuw
        qiodpwdgd kr h qwige qeigl ewdl fgdhed. ewd ewkgy iuekir
        kq ei whzd ewd ghryio uhghcghuw md ewd drykrc uhghcghuw
        kr h qwige qeigl. ri oheedg pwkfw ib ewdqd fwhxxdrcdq 
        kq arydgehjdr, ewd pgkedg kq bigfdy ei aqd fgdhekzkel
        ei krfiguighed ewd uhghcghuw krei ewdkg pgkekrc
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
            '.':'.',',':',','\n':'\n','h':'a',
            'i':'o','b':'f','k':'i','e':'t',
            'w':'h','d':'e','r':'n','m':'b',
            'g':'r','f':'c','u':'p','c':'g',
            'l':'y','z':'v','x':'l','p':'w',
            'y':'d','o':'m','q':'s','a':'u',
            'v':'x','j':'k'
        }


    
def algo(src,mapping):
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
    freq(src)
    print('\n        ---------------------------------------------------------')
    print(src)                
    print('        ---------------------------------------------------------')
    algo(src,mapping)    
    print('        ---------------------------------------------------------')

decipher()
