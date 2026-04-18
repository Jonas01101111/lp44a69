#include <stdio.h>
int main()
{
    int x, i = 0, c = 0;

    while (i < 10)
    {
        printf("insira o numero:");
        scanf("%d", &x);
        
            c+=x;
        

        i++;
    }
    printf("total:%d", c);
    return 0;
}