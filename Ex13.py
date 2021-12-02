Base = float(input("Digite o valor referente a largura de um terreno: "))
Altura = float(input("Digite o valor referente ao comprimento deste terreno: "))

Area = (Base*Altura)

print(f"A area deste terreno e de {Area:.2f} m2.")

if Area < 100:

    print("Terreno Pequeno")

else:

    print("Terreno Grande demais.")

