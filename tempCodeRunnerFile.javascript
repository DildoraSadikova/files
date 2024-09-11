import json
l1=[{
    "Oquvchi": "Bred Pid",
        "ID": 1234,
        "Imtihon ball": 70,
        "Yiqilgan": false,
        "Izoh": "Vazifa qoniqarli bajarilgan"
    },
    {
        "Oquvchi": "Leonardo Dikabryo",
        "ID": 335,
        "Imtihon ball": 45,
        "Yiqilgan": true,
        "Izoh": "Masalalar xato ishlangan"
    },
    {
        "Oquvchi": "Jim Kerry",
        "ID": 156,
        "Imtihon ball": 80,
        "Yiqilgan": false,
        "Izoh": "Vazifa yaxshi bajarilgan"
    },
    {
        "Oquvchi": "Selena Gomez",
        "ID": 221,
        "Imtihon ball": 54,
        "Yiqilgan": true,
        "Izoh": "Vazifalar qoniqarsiz bajarilgan"
    }
]
s=json.dumps(l1)
with open("sample.json", "w") as j:
    j.write(s)
for x in j:
    if (x["yiqilgan"]==True):
    print(x)