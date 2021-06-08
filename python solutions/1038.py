x, y =[float(s) for s in input().split()]

if(x == 1):
    result = (float) (y * 4.00)
elif(x == 2):
    result = (float) (y * 4.50)
elif(x == 3):
    result = (float) (y * 5.00)
elif(x == 4):
    result = (float) (y * 2.00)
elif(x == 5):
    result = (float) (y * 1.50)

print("Total: R$ {:.2f}".format(result))