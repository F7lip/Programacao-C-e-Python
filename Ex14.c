#include<stdio.h>

int main(int argc, char const *argv[])
{
    // Inserção das variáveis

    int NumeroX, NumeroY, NumeroZ;

    // Inserção do primeiro valor
    printf("Insira um valor qualquer: ");
    scanf("%i",&NumeroX);

    
    // Inserção do segundo valor
    printf("Insira um valor qualquer: ");
    scanf("%i",&NumeroY);
    
    
    // Inserção do terceiro valor
    printf("Insira um valor qualquer: ");
    scanf("%i",&NumeroZ);

    //Comparação entre valores
    if (NumeroX>NumeroY)
    {
        if (NumeroX>NumeroZ)
        {
            printf("O maior valor inserido e %i", NumeroX);
        }
        else {
            printf("O maior valor inserido e %i", NumeroZ);
        }
    }
    else{
    
        if (NumeroY>NumeroZ)
        {
            printf("O maior valor inserido e %i", NumeroY);
        }
        else {
            printf("O maior valor inserido e %i", NumeroZ);
        }
        

    }
        
    
    
    
    return 0;
}
