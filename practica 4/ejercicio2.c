#include <stdio.h>
#include <stdlib.h>
int main()
{
    int valor_e;
    int *ptr = &valor_e;
    printf("Introduca un numero entero: ");
    scanf("%i", &valor_e);
    printf("Valor introducido e impreso por el apuntador %i \n", *ptr);
    system("pause");
    return 0;
}