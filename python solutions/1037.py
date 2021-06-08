val = float(input())

if(val < 0 or val > 100):
    print("Fora de intervalo")
elif(val >= 0 and val <= 25):
    print("Intervalo [0,25]")
elif(val > 25 and val <= 50):
    print("Intervalo (25,50]")
elif(val > 50 and val <= 75):
    print("Intervalo (50,75]")
elif(val > 75 and val <= 100):
    print("Intervalo (75,100]")