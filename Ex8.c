#include<stdio.h>

int main(int argc, char const *argv[])
{
    // Declarar as variáveis
    float Altura,Peso,IMC;

    // Inserir a altura do paciente
    printf("Insira a altura do paciente: ");
    scanf("%f",&Altura);

    // Inserir o peso do paciente
    printf("Insira o peso do paciente: ");
    scanf("%f",&Peso);

    //Faz o Cálculo do  IMC
    IMC=Peso/(Altura*Altura);

    //Mostra o resultado final
    printf("O paciente em questao tem um IMC de %.2f.",IMC);

    return 0;
}
