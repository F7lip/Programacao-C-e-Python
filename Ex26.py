v1= float(input("Insira um valor qualquer\n para gerar sua tabuada de 1 a 10:"))

i = 1
while(v1 < 0):

    v1= float(input("Insira um valor positivo\n para gerar sua tabuada de 1 a 10:"))
    
while (i <= 10 ):
    
        r = v1 * i
    
        print(f" {v1:.0f} X {i} = {r:.0f}")

        i = i + 1   
   

