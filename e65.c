#include <stdio.h>
int main()
{
    int x, inicial = 0, c = 0, final = 0;
    printf("insira o numero inicial:");
    scanf("%d", &inicial);
    printf("insira o numero final:");
    scanf("%d", &final);

    while (inicial <= final)
    {
        printf("insira a nota:");
        scanf("%d", &x);

        c += inicial;

        inicial++;
    }
    printf("soma:%d", c );
    return 0;
}