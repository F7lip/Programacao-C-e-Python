#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int base, altura, area;

    printf("Para calcular a area de um terreno insira o seu comprimento:");
    scanf("%i", &base);

    printf("Agora insira a sua largura:");
    scanf("%i", &altura);

    area= base*altura;

    if (area>100)
    {
        printf("Terreno Grande Demais.");
    }
    else {
        printf("A area do terreno sera de %i m2.",area);
    }
    
    

    return 0;
}