#include <stdio.h>
int main()
{
    int x, i = 0, c = 0, t = 0;
    printf("insira o numero de alunos:");
    scanf("%d", &t);

    while (i < t)
    {
        printf("insira a nota:");
        scanf("%d", &x);

        c += x;

        i++;
    }
    printf("media das notas:%d", c / t);
    return 0;
}