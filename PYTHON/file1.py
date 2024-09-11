f=open("soz.txt", "x")
f.close()
f=open("soz.txt", "w")
f.write("Salom dumyo")
f.close()
f=open("soz.txt", "r")
matn=f.read()
print(matn, end="")
f.seek(0)
for i in f:
    for j in i:
        print(j)
f.close()
f.seek(0)
text=f.readline()
print(text)
f.seek(0)
ls=f.readlines()
print(ls)

for i in ls:
    for j in i:
        print(j, end="")
f.close()
f=open("soz.txt", "w")
lis=["Salom", "Qabul", "qilindi"]
f.writelines(lis)
for i in lis:
    f.write(i)
    f.write(" ")

f.close()


