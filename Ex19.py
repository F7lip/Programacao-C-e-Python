aceleracao = float(input("Insira o valor da aceleraçao do veiculo: "))
vi = float(input("Insira a velocidade inicial: "))
t = float(input("Insira o tempo de percurso: "))

vt = vi + (aceleracao*t)

print(f"A velocidade final e de {vt:.2f}.")

if vt <= 40:
    
    print(f"Veiculo Muito Lento")

else:
    
    if vt > 40 and vt <= 60:

        print("Velocidade permitida.")

    elif vt > 60 and vt <= 80:
        print("Velocidade de cruzeiro.")

    elif vt > 80 and vt <=120:
        print("Veiculo rapido")

    else:
        print("veiculo muito rapido.")