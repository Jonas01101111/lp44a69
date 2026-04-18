#include <stdio.h>
int main()
{
    float n1=-1,n2=-1;
    char c='S';
    while(c != 'n'||c!="N")
    {
    while (n1<0||n1<10)
    {
        printf("insira nota 1:");
        scanf("%f",&n1);
    }
    while (n2<0||n2<10)
    {
        printf("insira nota 2:");
        scanf("%f",&n2);
    }
    printf("media:%d",(n1+n2)/2);
    return 0;
    printf("deseja continuar? s/n");
    scanf("%c",&c);
    
}
return 0;
}