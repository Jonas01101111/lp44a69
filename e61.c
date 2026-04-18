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
    printf("media:%d", c/10);
    return 0;
}