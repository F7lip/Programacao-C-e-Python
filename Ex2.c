#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int lado, area;

    printf("Para calcular a area de um quadrado insira o tamanho de seu lado:");
    scanf("%i", &lado);

    area= lado*lado;

    printf("A area do quadrado sera de %i m2",area);
    

    return 0;
}
