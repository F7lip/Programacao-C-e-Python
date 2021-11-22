#include <stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    // Declaração das variáveis
    float Temp, TempF ;
    int Vfixo=32;

    // Inserção de valores
    printf("Insira o valor da temperatura em graus Celcius, \n para que seja feita a conversao para Graus Fahrenheit:");
    scanf("%f",&Temp);

    // Conversão de valores
    TempF = ((Temp*9)/5)+32;

    // Resultado final sendo exibido
    printf("%f C sao equivalentes a %f F",Temp, TempF);


    return 0;
}
