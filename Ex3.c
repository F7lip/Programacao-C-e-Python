#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int base, altura, area;

    printf("Para calcular a area de um triangulo insira o tamanho da base:");
    scanf("%i", &base);

    printf("Agora insira a altura do triangulo:");
    scanf("%i", &altura);

    area= (base*altura)/2;

    printf("A area do triangulo sera de %i m2",area);
    

    return 0;
}
