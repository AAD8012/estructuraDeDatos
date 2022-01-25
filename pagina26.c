#include <stdio.h>
#include <string.h>

int main()
{

    char texto1[] = "Don pepito";
    char texto2[] = " y ";
    char texto3[] = "Don jose";
    printf("%S\n", texto1);

    strcat(texto1, texto2);
    printf("%s\n", texto2);
    strcat(texto1, texto3);
    printf("%s\n", texto2);
    getchar();
    return 0;
}
