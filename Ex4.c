#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float X, Y, W, Z, media;

    printf("Para calcular a média aritmética de quatro numeros insira os valores.");
    printf("\nInsira o primeiro valor:");
    scanf("%f", &X);

    printf("Insira o segundo valor:");
    scanf("%f", &Y); 

    printf("Insira o terceiro valor:");
    scanf("%f", &W);

    printf("Insira o quarto valor:");
    scanf("%f", &Z); 

    media= (X+Y+W+Z)/4;

    printf("A media aritimetica e de %f", media);   
    
    

    return 0;
}
