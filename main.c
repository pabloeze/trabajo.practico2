#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


int main()
{
    EPersona alu[19];
    char seguir='s';
    int opcion=0;
    static int contador=0;
    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Buscar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Alta\n");
                contador=alta(alu,contador);
                break;
            case 2:
                printf("Buscar\n");
                buscar(alu,contador);
                break;
            case 3:
                printf("Listar\n");
                listar(alu,contador);
                break;
            case 4:
                graficar();
                break;
            case 5:
                seguir = 'n';
                break;
            case 6:
                printf("Baja\n");
                contador=baja(alu,contador);
                break;
        }
    }

    return 0;
}
