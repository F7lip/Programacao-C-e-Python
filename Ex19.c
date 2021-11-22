#include<stdio.h>

int main(int argc, char const *argv[])
{
    // Inserção das variáveis

    float a,VI,t,V;

    // Inserção do primeiro valor
    printf("Insira o valor da aceleracao: ");
    scanf("%f",&a);

    
    // Inserção do segundo valor
    printf("Insira a velocidade inicial: ");
    scanf("%f",&VI);
    
    
    // Inserção do terceiro valor
    printf("Insira o tempo de percurso: ");
    scanf("%f",&t);

    V= VI + (a*t);

    if(V<=40){

        printf("Veiculo muito lento");

    }
    else{

        if(V>40 && V<=60){

            printf("Velocidade Permitida");

        }
        else{

            if(V>60 && V<=80){

                printf("Velocidade de Cruzeiro");

            }
            else{

                if(V>80 && V<=120){

                    printf("Veiculo Rapido");
                }
                else{

                    printf("Veiculo muito Rapido");
                
                }


            }
        }

    }
    return 0;
}
