#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int base, altura, area;

    printf("Para calcular a area de um retangulo insira o tamanho da base:");
    scanf("%i", &base);

    printf("Agora insira a altura do retangulo:");
    scanf("%i", &altura);

    area= base*altura;

    printf("A area do retagulo sera de %i m2",area);
    

    return 0;
}
