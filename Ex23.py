v1 = float(input("Insira um valor qualquer: "))
v2 = float(input("Insira um outro valor qualquer: "))

while(v1 > v2):

    v2 = float(input("Insira um outro valor qualquer: "))

print(f"O valor {v2:2f} e maior que o valor {v1:.2f}. ")
