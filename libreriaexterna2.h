cuadrado()
{
    float num1;
    printf("Introduce la medida de un lado\n");
    scanf("%f", &num1);
    float res = num1 * num1;
    printf("El area es:%f\n", res);
}

circulo()
{
    float num1 = 3.1416;
    float num2;
    printf("Introduce el radio\n");
    scanf("%f", &num2);
    float res = (num2 * num2) * num1;
    printf("El area es:%f\n", res);
}

triangulo()
{
    float num1;
    float num2;
    printf("Introduce la altura\n");
    scanf("%f", &num1);
    printf("Introduce la base\n");
    scanf("%f", &num2);
    float res = (num1 * num2) / 2;
    printf("El area es:%f\n", res);
}

rectangulo()
{
    float num1;
    float num2;
    printf("Introduce la base\n");
    scanf("%f", &num1);
    printf("Introduce la altura\n");
    scanf("%f", &num2);
    float res = num1 * num2;
    printf("El area es:%f\n", res);
}

trapecio()
{
    float num1;
    float num2;
    float num3;
    printf("Introduce la base 1\n");
    scanf("%f", &num1);
    printf("Introduce la base 2\n");
    scanf("%f", &num2);
    printf("Introduce la altura\n");
    scanf("%f", &num3);
    float res = ((num1 + num2) * num3) / 2;
    printf("El area es:%f\n", res);
}

elipse()
{
    float num1;
    float num2;
    float num3 = 3.1416;
    printf("Introduce a\n");
    scanf("%f", &num1);
    printf("Introduce b\n");
    scanf("%f", &num2);
    float res = num1 * num2 * num3;
    printf("El area es:%f\n", res);
}