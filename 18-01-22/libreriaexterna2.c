#include <stdio.h>
#include <stdlib.h>
#include <libreriaexterna2.h>

int main()
{
    int opt;
    int salir;
    do
    {
        printf("Seleccione figura de la cual quiere calcular su area:\n");
        printf("1 Cuadrado\n");
        printf("2 Circulo\n");
        printf("3 Triangulo\n");
        printf("4 Rectangulo\n");
        printf("5 Trapecio\n");
        printf("6 Elipse\n");

        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            cuadrado();
            break;
        case 2:
            circulo();
            break;
        case 3:
            triangulo();
            break;
        case 4:
            rectangulo();
            break;
        case 5:
            trapecio();
            break;
        case 6:
            elipse();
            break;
        default:
            printf("no existe esa opcion");
        }
    } while (salir != 'n');
    {
        system("pause");
        return 0;
    }
}


