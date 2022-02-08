#include <stdio.h>
#include <stdlib.h>

struct producto
{
    int codigo;
    char descripcion[40];
    float precio;
};

int main()
{
    struct producto pro1, pro2;

    printf("ingresa el codigo del producto \n");
    scanf("%i",&pro1.codigo);
    fflush(stdin);
    
}