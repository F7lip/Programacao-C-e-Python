v1 = float(input("Insira um numero qualquer: "))
v2 = float(input("Insira um outro numero qualquer: "))
v3 = float(input("Insira um terceiro numero qualquer: "))

if v1 < v2:

    if v2 < v3:
        print(f"O número {v3:} e o maior entre os tres.")

    else:
        print(f"O número {v2:} e o maior entre os tres.")


else:
    print(f"O número {v1:} e o maior entre os tres.")