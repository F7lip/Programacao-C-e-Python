p1 = float(input("Insira a nota p1: "))
p2 = float(input("Insira a nota p2: "))

media = (p1 + (2*p2))/3

print(f"Sua media final foi de {media:.2f}.")

if media < 5:

    print("voce foi reprovado.")

else:

    print("Voce foi aprovado.")