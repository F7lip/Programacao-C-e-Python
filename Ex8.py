peso = float(input("Insira seu peso para calculo de IMC: "))
altura = float(input("Insira sua altura: "))

imc= (peso/(altura*altura))

print(f"O seu IMC e de {imc:.2f}.")