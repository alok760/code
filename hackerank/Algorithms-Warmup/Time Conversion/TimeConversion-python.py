import sys

def timeConversion(s):

    if s[-2]=="A":
        if s[0:2]==str(12):
            s=str('00')+s[2:8]
        else:
            s=s[0:8]
    else:
        if s[0:2]==str(12):
            s=s[0:8]
        else:
            s1=int(s[0:2])+12
            s=str(s1)+s[2:8]



    return s

s = input().strip()
result = timeConversion(s)
print(result)
