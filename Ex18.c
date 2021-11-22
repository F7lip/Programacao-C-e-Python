#include <stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    // Inserção das variáveis

    float Altura,IMC,Peso;
    char Sexo;

    // Inserção do primeiro valor
    printf("Insira o Peso do Paciente: ");
    scanf("%f",&Peso);

    
    // Inserção do segundo valor
    printf("Insira a Altura do Paciente: ");
    scanf("%f",&Altura);
    
    
    // Inserção do terceiro valor
    printf("Insira o Sexo do Paciente inserindo M ou F: ");
    scanf("%s",&Sexo);

    // Comparação entre os sexos para diferenciar pacientes
    if (Sexo == 'M' || Sexo == 'm' )
    {
        IMC = (Peso/(Altura*Altura));

        if (IMC< 20 )
        {
         
             printf("Paciente Abaixo do Peso ideal");
        }

        else{

            if(IMC>20 && IMC<25){

                printf("Paciente no Peso ideal");
            }
            else{

                printf("Paciente Acima Do Peso");
            }
        }
        
    }
    else{

            if(IMC<19){

               printf("Paciente Abaixo do Peso ideal");

            }
            else{

                if(IMC>19 && IMC<24){

                    printf("Paciente no Peso ideal");

                }
                else{

                    printf("Paciente Acima do Peso");
                }
            
            }
        }
    

    return 0;
}
 