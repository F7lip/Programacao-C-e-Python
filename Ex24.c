#include<stdio.h>

int main(int argc, char const *argv[])
{
    //inserção das variáveis

    char Sexo;

    // Inserção do primeiro valor
    printf("Para definir um sexo insira M ou F: ");
    scanf("%s",&Sexo);

    while(Sexo!='M' && Sexo!='F'){  

        printf("O valor inserido nao corresponde a um sexo, \n Favor Inserir Novamente: ");
        scanf("%s",&Sexo);
    }

    if(Sexo == 'F'){

        printf("Esta pessoa e do sexo feminino");
    }
    else{

        printf("Esta pessoa e do sexo masculino");
    }

  
    return 0;
}