import base64

def TwoStringWeirdo(A_0, A_1):
    length = len(A_0)
    length2 = len(A_1)
    array = ""
    for i in range(length):
        array += chr(ord(A_0[i]) ^ ord(A_1[i % length2]))
    return array

maw = ["BQ==", "QA==", "AQ==", "Cg==", "LA==", "LA==", "Gw==", "Rw==", "AQ==", "Fw==", "EA==", "Qw==", "AQ==", "QA==", "LA==", "LA==", "GA==", "QA==", "Cg==", "FA==", "QA==", "HQ=="]
num = 0
flag = ""

while(num <= 21):
    flag += TwoStringWeirdo(str(base64.b64decode(maw[num]), 'utf-8'), "s0h4rd")
    num += 1
    
print(flag)

# v3ry__h4rdc0r3__k3yg3n  Kh12E Bwh2B 22

    # flag is Root-Me
    # v3ry_MR8NH_h4rdc0r3_AAQNB_k3yg3n
