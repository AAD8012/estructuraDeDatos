#include <stdio.h>
#include <stdlib.h>
#include <libreriaexterna1.h>

int main()
{
    int opt;
    int salir;
    do
    {
        printf("Seleccione la operacion que desea realizar:\n");
        printf("1 Suma\n");
        printf("2 Resta\n");
        printf("3 Multiplicacion\n");
        printf("4 Division\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            sumar();
            break;
        case 2:
            restar();
            break;
        case 3:
            multiplicacion();
            break;
        case 4:
            dividir();
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