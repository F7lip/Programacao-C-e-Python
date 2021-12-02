peso = float(input("Insira seu peso para calculo de IMC: "))
altura = float(input("Insira sua altura: "))
sexo = str(input("Insira seu sexo digitando M ou F: "))

imc= (peso/(altura*altura))

if sexo == 'M' or sexo == 'm':

    print(f"O seu IMC e de {imc:.2f}.")

    if imc < 20:
        print("Voce esta abaixo do peso ideal.")

    elif imc >= 20 and imc <= 25:
        print("Voce esta no peso ideal.")

    else:
        print("Voce esta acima do peso.")
else:
    print(f"O seu IMC e de {imc:.2f}.")

    if imc < 19:
        print("Voce esta abaixo do peso ideal.")

    elif imc >= 19 and imc <= 24:
        print("Voce esta no peso ideal.")

    else:
        print("Voce esta acima do peso.")

