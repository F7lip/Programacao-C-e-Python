#include<stdio.h>

int main(int argc, char const *argv[])
{
    //inserção das variáveis

    int numero;

    // Inserção do primeiro valor
    printf("Insira um numero qualquer: ");
    scanf("%i",&numero);

    while(numero<=0){  

        printf("Este numero nao e positivo, insira novamente: ");
        scanf("%i",&numero);
    }

    printf("O numero %i e positivo",numero);



    
    return 0;
}
