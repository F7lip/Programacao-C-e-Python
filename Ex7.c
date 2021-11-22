#include<stdio.h>


int main(int argc, char const *argv[])
{
    // Declaração de variáveis
    float A,B,C,D,E,ValorPago,Troco,ValorTotal;

    // Inserindo o valor dos 5 produtos
    printf("Insira o valor do primeiro produto: ");
    scanf("%f",&A);

    printf("Insira o valor do segundo produto: ");
    scanf("%f",&B);

    printf("Insira o valor do terceiro produto: ");
    scanf("%f",&C);

    printf("Insira o valor do quarto produto: ");
    scanf("%f",&D);

    printf("Insira o valor do quinto produto: ");
    scanf("%f",&E);

    // Mostra o valor total dos produtos
    ValorTotal= (A+B+C+D+E);
    printf("O valor final da compra e de %.2f reais. ", ValorTotal);

    // Insira o valor dado ao caixa
    printf("Insira o valor fornecido ao caixa: ");
    scanf("%f",&ValorPago);

    // Calcula e mostra o valor do troco
    Troco= ValorPago-ValorTotal;
    printf("O seu troco sera de %.2f reais.",Troco);

    
    return 0;
}
