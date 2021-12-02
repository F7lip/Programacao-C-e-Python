v1 = float(input("Insira um numero qualquer: "))
v2 = float(input("Insira um outro numero qualquer: "))
v3 = float(input("Insira um terceiro numero qualquer: "))

vl = v1 + v2

if vl > v3:
    if v1 == v2 and v1 == v3:
        print("Os tres numeros formam um triangulo equilátero")

    elif v1 == v2 or v1 == v3 or v2 == v3:
        print("Os tres numeros formam um triangulo isosceles")
    
    else:
        print("Os tres numeros formam um triangulo escaleno")

else:
    print("Os tres numeros nao formam um triangulo")
