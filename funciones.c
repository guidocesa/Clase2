void Saludar(int *yaSaludamos)
{
    printf("Hola! \n\n");
    *yaSaludamos = 1;
}

void Brindar(int yaSaludamos , int *yaBrindamos)
{
    if(yaSaludamos)
    {
        printf("Chin chin! \n\n");
        *yaBrindamos = 1;
    }
    else
    {
        printf("Para brindar primero debemos saludarnos! \n\n");
    }
}

void Despedirse(int *yaSaludamos , int *yaBrindamos)
{
    if(*yaSaludamos && *yaBrindamos)
    {
        printf("Adios! \n\n");
        *yaSaludamos = 0;
        *yaBrindamos = 0;
    }
    else
    {
        if(!*yaSaludamos)
        {
            printf("Para despedirnos hay que saludar!\n\n");
        }
        else
        {
            printf("Para despedirnos hay que brindar!\n\n");
        }
    }
}

void Salir(char *opcionSeleccionada)
{
    printf("Seguro que desea salir? (s/n)");
    fflush(stdin);
    scanf("%c" , opcionSeleccionada);
}
