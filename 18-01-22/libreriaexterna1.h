sumar()
{
    float num1;
    float num2;
    printf("Introduce el primer numero\n");
    scanf("%f", &num1);
    printf("Introduce el segundo numero\n");
    scanf("%f", &num2);
    float resSuma = num1 + num2;
    printf("El resultado es:%f\n", resSuma);
    return 0;
}

restar()
{
    float num1;
    float num2;
    printf("Introduce el primer numero\n");
    scanf("%f", &num1);
    printf("Introduce el segundo numero\n");
    scanf("%f", &num2);
    float resResta = num1 - num2;
    printf("El resultado es:%f\n", resResta);
    return 0;
}

multiplicacion()
{
    float num1;
    float num2;
    printf("Introduce el primer numero\n");
    scanf("%f", &num1);
    printf("Introduce el segundo numero\n");
    scanf("%f", &num2);
    float resMulti = num1 * num2;
    printf("El resultado es:%f\n", resMulti);
    return 0;
}

dividir()
{
    float num1;
    float num2;
    printf("Introduce el primer numero\n");
    scanf("%f", &num1);
    printf("Introduce el segundo numero\n");
    scanf("%f", &num2);
    if (num2 != 0)
    {
        float resDiv = num1 / num2;
        printf("El resultado es:%f\n", resDiv);
        
    }
    else
    {
        printf("El resultado es: 0\n");
    }
}