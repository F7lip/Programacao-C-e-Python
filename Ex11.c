#include<stdio.h>


int main(int argc, char const *argv[])
{

    //Declaração de variáveis
    int NumeroX, NumeroY;


    // Inserção do primeiro valor
    printf("Insira um numero qualquer: ");
    scanf("%i",&NumeroX);

    // Inserção do segundo valor
    printf("Insira outro numero qualquer: ");
    scanf("%i",&NumeroY);

    // Comparação entre os valores
    if(NumeroX==NumeroY){ // o == é a comparação equivalente a "IGUAL"
        printf("Os Valores inseridos sao identicos.");

    }
    else {
        if(NumeroX>NumeroY){
            printf("O maior valor entre os inseridos e %i.",NumeroX);
        }
        else {
            printf("O maior valor entre os inseridos e %i.",NumeroY);
        }
    }
    
   
    return 0;
}
