#include<stdio.h>

int main(int argc, char const *argv[])
{
    // Inserção das variáveis

    int NumeroX, NumeroY, NumeroZ, Confirmacao;

    // Inserção do primeiro valor
    printf("Insira um valor qualquer: ");
    scanf("%i",&NumeroX);

    
    // Inserção do segundo valor
    printf("Insira um valor qualquer: ");
    scanf("%i",&NumeroY);
    
    
    // Inserção do terceiro valor
    printf("Insira um valor qualquer: ");
    scanf("%i",&NumeroZ);

    //Confirmaçao do Triângulo
    Confirmacao= NumeroX+NumeroY;


    //Comparação entre valores
    if (Confirmacao>NumeroZ)
    {
        if (NumeroX==NumeroY)
        {
            if (NumeroX==NumeroZ)
            {
                printf("A figura formada e um triangulo equilatero");
            }
            else {
                printf("A figura formada e um triangulo Isoceles");
            }
        }
        else {
            if (NumeroY==NumeroZ)

            {
                printf("A figura formada e um triangulo Isoceles");
            }
            else {
                printf("A figura formada e um triangulo escaleno");
            }
            
        }
            
    }
    else{
    
        printf("A figura formada nao e um triangulo");

    }
        
    
    
    
    return 0;
}
