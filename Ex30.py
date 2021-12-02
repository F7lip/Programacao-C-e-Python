input("pressione uma tecla qualquer: ")

proximo = 0
ant = 0
i=0

while(i <= 30 ):
    
    i = i + 1
    print(f"{proximo}")

    proximo = proximo + ant
    ant = proximo - ant

    if(proximo == 0):
        proximo = proximo + 1
 
    
