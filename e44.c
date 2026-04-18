#include <stdio.h>
int main()
{
    float  n1=0,n2=0;

    printf("insira n1");
    scanf("%f",&n1);

    do
    {
        printf("insira n2:");
        scanf("%f",&n2);
        
    }while (n2==0);

    printf("quociente é:%f",n1/n2);
    return 0;
}