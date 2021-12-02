input("pressione uma tecla qualquer: ")

proximo = 1
ant = 0
ant2 = 0
ant3 = 0
i=0

while(i <= 20 ):
    
    i = i + 1
    print(f"{proximo}")

    proximo = proximo + ant3 + ant + ant2
    ant = proximo - ant - ant2 - ant3
    ant2 = ant -ant2 - ant3


 