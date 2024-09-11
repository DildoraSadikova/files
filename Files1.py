f1=open("fayl123.txt", "x")
f1.close()
f1=open("fayl123.txt", "r")
text1=f1.readlines()
for i in text1:
    s=max(len(i))
    print(s)