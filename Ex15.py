peso = float(input("Insira seu peso para calculo de IMC: "))
altura = float(input("Insira sua altura: "))

imc= (peso/(altura*altura))

print(f"O seu IMC e de {imc:.2f}.")

if imc < 20:
    print("Voce esta abaixo do peso ideal.")

elif imc >= 20 and imc <= 25:
    print("Voce esta no peso ideal.")

else:
    print("Voce esta acima do peso.")