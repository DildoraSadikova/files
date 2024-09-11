f=open("myfile.txt", "x")
f.close()
f=open("myfile.txt", "w")
ls=["Salom qish. Bugun havo iliq."]
f.writelines(ls)
f.close()
f=open("myfile.txt", "r")
line=f.readline()