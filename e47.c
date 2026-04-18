#include <stdio.h>
int main()
{
    float  n1=0,n2=0;

    printf("insira n1");
    scanf("%f",&n1);

    while(n2==0)
    {
        printf("insira n2:");
        scanf("%f",&n2);
        if (n2==0){printf("VALOR INVALIDO");}
    }

    printf("quociente é:%f",n1/n2);
    return 0;
}