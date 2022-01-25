#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAXLON 80

int main(void)
{
    char a[MAXLON + 1];
    int longitud;

    clrscr();
    printf("Introduce una cadena(max. %d caracteres): ", MAXLON);
    scanf("%s", &a);
    longitud = strlen(a);
    printf("\nlongitud de la cadena: %d\n", longitud);
    getchar();
    return 0;
}