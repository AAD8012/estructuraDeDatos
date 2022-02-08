#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c[11] = "COMPUTACION", * p;
    p = c;
	printf("%s \n", p);
    // c[11] = *p++;
    // printf("%c \n", *p);
    system("pause");
    return 0;
}
