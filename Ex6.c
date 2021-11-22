#include<stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variáveis
    float Cotacao, Qdolar, Vreal;

    // Insere valor da cotação do dólar
    printf("Insira o valor da cotacao do dolar: ");
    scanf("%f",&Cotacao);

    // Insere a quantia de dólares a ser convertida
    printf("Insira a quantia a ser convertida: ");
    scanf("%f",&Qdolar);

    // Converter Dólar para Real
    Vreal= Cotacao*Qdolar;

    // Exibe o valor final
    printf("A quantia final sera de %f reais.",Vreal);



    
    return 0;
}
