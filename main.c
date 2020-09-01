#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"

int main()
{
    char opcionSeleccionada;
    int yaBrindamos = 0;
    int yaSaludamos = 0;

    do
    {

        system("cls");
        printf("*** Menu de opciones *** \n\n");
        printf("a Sludar \n");
        printf("b Brindar \n");
        printf("c Despedirse \n");
        printf("d Salir \n");
        printf("Ingrese opcion: ");
        fflush(stdin);
        scanf("%c" , &opcionSeleccionada);

        switch(opcionSeleccionada)
        {
        case 'a':
            Saludar(&yaSaludamos);
            break;

        case 'b':
            Brindar(yaSaludamos, &yaBrindamos);
            break;

        case 'c':
            Despedirse(&yaSaludamos , &yaBrindamos);
            break;

        case 'd':
            Salir(&opcionSeleccionada);
            break;
        }
        system("pause");
    }
    while(opcionSeleccionada != 's');
    return 0;
}


