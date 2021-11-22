#include<stdio.h>

int main(int argc, char const *argv[])
{
    // Inserção das variáveis

    float P1,P2,Media;

    // Inserção do primeiro valor
    printf("Insira a nota da P1: ");
    scanf("%f",&P1);

    
    // Inserção do segundo valor
    printf("Insira a nota da P2: ");
    scanf("%f",&P2);

    Media = (P1+(2*P2))/3;

    if (Media >= 5)
    {
        printf("Aprovado com a nota %f",Media);

    }
    else{

        printf("Reprovado com a nota %f",Media);
    }



    return 0;
}
