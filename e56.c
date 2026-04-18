#include <stdio.h>
int main()
{
    int x = 0;
    while (x < 0 || x > 10)
    {
        printf("insira o numero:");
        scanf("%d", &x);
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d\n", i, x * i);
    }

    return 0;
}