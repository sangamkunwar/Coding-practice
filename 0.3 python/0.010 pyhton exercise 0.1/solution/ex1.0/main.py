print("choose one \n1. °C to °F \n2. °F to °C")
i = int(input())
if(i==1):
    c = int(input("enter °C\n"))
    f = (c * 9 / 5) + 32
    print(f"{c:.2f}°C is {f:.2f}°F.")
elif(i==2):
    f = int(input("enter °F\n"))
    c = (f - 32) * 5 / 9  
    print(f"{f:.2f}°F is {c:.2f}°C.")
else:
    print("please enter 1 or 2")