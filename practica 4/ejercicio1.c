#include <stdio.h>
#include <stdlib.h>
int main()
{
    int valor_e = 95;
    int *ptr1 = &valor_e;
    int **ptr5 = &ptr1;

    *ptr1 = 105;
    **ptr5 = 99;

    printf("valor_e = %i", valor_e);
    system("pause");
    return 0;
}
