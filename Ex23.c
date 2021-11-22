#include<stdio.h>

int main(int argc, char const *argv[])
{
    //inserção das variáveis

    int Numero1,Numero2;

    // Inserção do primeiro valor
    printf("Insira um numero qualquer: ");
    scanf("%i",&Numero1);

     // Inserção do segundo valor
    printf("Insira outro numero qualquer: ");
    scanf("%i",&Numero2);


    while(Numero1>Numero2){  

        printf("O primeiro numero e menor que o segundo, \n Favor inserir novamente: ");
        scanf("%i",&Numero2);
    }

    printf("O numero %i e maior que o numero %i",Numero2,Numero1);



    
    return 0;
}