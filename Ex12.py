Base = float(input("Digite o valor referente a largura de um terreno: "))
Altura = float(input("Digite o valor referente ao comprimento deste terreno: "))

Area = (Base*Altura)

if Area < 100:

    print(f"A area deste terreno e de {Area:.2f} ")

else:

    print("Terreno Grande demais.")

