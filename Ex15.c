#include<stdio.h>


int main(int argc, char const *argv[])
{
    // Inserção de variáveis
    int Peso, IMC;
    float Altura;

    // Inserção de valor
    printf("Insira o Peso do paciente:");
    scanf("%i",&Peso);

    // Inserção de valor
    printf("Insira a Altura do paciente:");
    scanf("%f",&Altura);

    // Cálculo do IMC
    IMC= Peso/(Altura*Altura);

    // Comparação de variáveis

    if (IMC<20)
    {
        printf("Abaixo do Peso.");
    }
    
    else {
        if (IMC<25)
        {
            printf("Peso ideal.");
        }
        else {
            printf("Acima do Peso.");
        }
        
    }
    







    return 0;
}
