#include<stdio.h>

int main(int argc, char const *argv[])
{
    // inserção de variaveis

    int num, i,t;

    t=0;
    i=0;

    while (i<=10)
    {
        num= 5*i;
        printf("5 X %i = %i\n",t,num);
        t++;
        i++;
    }
    

    return 0;
}
