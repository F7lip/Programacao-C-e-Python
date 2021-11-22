#include<stdio.h>



int main(int argc, char const *argv[])
{
    // Inserção das variáveis

    int NumeroX, NumeroY, NumeroZ, Hipo;

    // Inserção do primeiro valor
    printf("Insira um valor qualquer: ");
    scanf("%i",&NumeroX);

    
    // Inserção do segundo valor
    printf("Insira um valor qualquer: ");
    scanf("%i",&NumeroY);
    
    
    // Inserção do terceiro valor
    printf("Insira um valor qualquer: ");
    scanf("%i",&NumeroZ);

    // Comparação para saber o maior número
    if (NumeroX>NumeroY)
    {
        if (NumeroX>NumeroZ)
        {
            Hipo= NumeroX*NumeroX;
            if (Hipo==(NumeroY*NumeroY)+(NumeroZ*NumeroZ))
            {
                printf("Com estes valores obteremos um triangulo retangulo.");
            }
            else
            {
                printf("Com estes valores nao obteremos um triangulo retangulo.");
            }
            
        }
        else
        {
            Hipo= NumeroZ*NumeroZ;
            if (Hipo==(NumeroY*NumeroY)+(NumeroX*NumeroX))
            {
                printf("Com estes valores obteremos um triangulo retangulo");
            }
            else
            {
               printf("Com estes valores nao obteremos um triangulo retangulo."); 
            }
        }
        
    }
    

    return 0;
}
