a = float(input("Insira um numero qualquer: "))
b = float(input("Insira um outro numero qualquer: "))
c = float(input("Insira um terceiro numero qualquer: "))

if a > b and a > c:

    hipo = a*a
    if hipo == ((b*b)+(c*c)):
        print("Os valores inseridos formam um triangulo retangulo")

    else:
        print("Os valores inseridos nao formam um triangulo retangulo") 

if b > a and b > c:
        hipo = b*b

        if hipo == ((a*a)+(c*c)):
            print("Os valores inseridos formam um triangulo retangulo")

        else:
             print("Os valores inseridos nao formam um triangulo retangulo")

if c > a and c > b:
        hipo = c*c

        if hipo == ((a*a)+(b*b)):
            print("Os valores inseridos formam um triangulo retangulo")

        else:
             print("Os valores inseridos nao formam um triangulo retangulo")
             