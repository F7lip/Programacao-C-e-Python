x = float(input("Insira um valor qualquer: "))
while(x < 0):
    
    print('Insira apenas valores positivos')
    x = float(input("Insira um valor qualquer: "))

a = float(input("Insira um valor qualquer: "))
b = float(input("Insira um outro valor qualquer: "))

while(a > b):

    b = float(input("Insira um outro valor qualquer: "))

i = b
    
while (i >= a ):
    
        r = x * b
    
        print(f" {x:.0f} X {b} = {r:.0f}")

        b = b - 1
        i = i - 1

        
        