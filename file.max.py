import sys
f=open("matn.txt", "r")
if(f.readable()):
    print("Readable")
else:
    sys.exit("Error")
res, ls=[], []
data=f.read()
for i in data.split("\n"):
    ls.extend(i.split("."))
for j in ls:
    res.extend(j.split())
natija=sorted(res, key=len)
print("Max= ", natija[-1])
print("Min= ", natija[0])