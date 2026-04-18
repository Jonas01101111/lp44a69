#include <stdio.h>
int main()
{
    int x, i = 0, c = 0;

    while (i < 10)
    {
        printf("insira o numero:");
        scanf("%d", &x);
        if (x <=20||x>=10)
        {
            c++;
        }

        i++;
    }
    printf("numeros selecionados:%d", c);
    return 0;
}