#include<stdio.h>

int main(int argc, char const *argv[])
{
    // inserção das variaveis

    int i,Numero,Npos,R,t,u;

    // Inserir um valor

    printf("Insira um Valor qualquer: ");
    scanf("%i",&Numero);
    
    
        if(Numero>0){

            printf("Numero inserido e valido \nInsira um novo valor positivo para o calculo: ");
            scanf("%i",&Npos);
         

        }
        else{
            for (int u = 0; u <= 0; u++)
            {
                printf("numero invalido, insira um outro: ");
                scanf("%i",&Npos);
                if(Npos>0){
                    return 17;
                }

            }
            
        }
    
    i=0;
    R=0;
    t=0;
    while (i<=10)
    {
        R=Npos*t;
        printf("%i X %i = %i\n",Npos,t,R);
        i++;
        t++;
    }
    

    return 0;
}
