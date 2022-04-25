username = input("Username:")
password = input("Password:")
from datetime import datetime
now = datetime.now()
if password=="69420"and username=="Default":
    nume= input("Buna ziua, utilizatorule cum ai prefera sa fi numit?")
    print ("Ma bucur de cunostinta "+nume)
    x=1
while True:
    print("Deci ce ai vrea sa faci "+nume+". O sugestie ar fi sa scrii intrebari pentru a vedea ce poti sa faci in aceasta versiune a programului.")
    raspuns2 = input()
    if raspuns2=="intrebari":
        print ("V0.5 Project ArchLight intrebari:")
        print ("1:Cum este vremea?")
        print ("2:Ce faci?")
        print ("3:Caini sau pisici?")
        print ("4:Care este data de azi?")
        print ("5:Cat este ceasu?")
        print ("6:Exit")
    elif raspuns2=="Cum este vremea":
       print ("da nu...")
    elif raspuns2 == "Ce faci?":
        print ("Deci ce asi putea sa fac decat sa exist intr-un void de programare.")
    elif raspuns2 == ("Caini sau pisici?"):
        print ("le caini")
        print ("Tu crezi ca opinia mea este correcta?(da sau nu)")
        raspuns21 = raw_input()
        if raspuns21 == "da":
            print ("Stiu nu sunt atat de draguti si loiali.")
        elif raspuns21 == "nu":
            print ("Ok sper ca iti place sa fii strangulat noaptea de un animal tradator.")
        else:
            print ("Da nu am inteles ce ai spus")
    elif raspuns2=="Care este data de azi?":
        print ('Data de azi este %02d-%02d-%04d' % (now.month, now.day, now.year))
    elif raspuns2=="Cat este ceasul?":
        print ("Ceasul este %02d:%02d:%02d" % (now.hour,now.minute,now.second))
    elif raspuns2=="Exit":
        print ("Aw esti sigur/a ca vrei sa pleci?(yes/no)")
        raspuns22 = input()
        if raspuns22=="no":
            print("Yay")
        elif raspuns22=="yes":
            break

