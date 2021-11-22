#include<stdio.h>

int main(int argc, char const *argv[])
{
    // Inserção das variáveis

    float P1,P2;

    // Inserção do primeiro valor
    printf("Insira a nota da P1: ");
    scanf("%f",&P1);

    P2= (((5*3)-P1)/2);

    printf("Voce precisa tirar a nota %f na P2 para ser aprovado",P2);

    
   
    return 0;

}
