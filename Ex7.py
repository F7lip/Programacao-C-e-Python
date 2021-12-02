v1 = float(input("Digite o valor do primeiro produto: "))
v2 = float(input("Digite o valor do segundo produto: "))
v3 = float(input("Digite o valor do terceiro produto: "))
v4 = float(input("Digite o valor do quarto produto: "))
v5 = float(input("Digite o valor do quinto produto: "))

vt = v1+v2+v3+v4+v5

print(f"O valor total a ser pago é de {vt:.2f}.")

pag = float(input("Insira o valor que foi dado ao caixa: "))

troco = pag - vt

print(f"O troco a ser fornecido será de {troco:.2f} reais.")