#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones.h"

 int alta(EPersona alu[],int contador){
        char nombre1[50];
        int edad;
        int estado;
        int dni;
        int k;
        printf("Contador %d\n",contador);
        printf("\nNombre ");
        scanf("%s",&nombre1);
        printf("\nEdad ");
        scanf("%d",&edad);
        printf("\nEstado ");
        scanf("%d",&estado);
        printf("\nDNI ");
        scanf("%d",&dni);

        if(contador!=0){
        for(k=0;k<=contador;k++)
        {
            if(alu[k].dni==dni)
            {
                printf("Ya existe ese alumno en la base");
                return;
            }
         }
        }
         strcpy(alu[contador].nombre,nombre1);
         alu[contador].edad=edad;
         alu[contador].estado=estado;
         alu[contador].dni=dni;
         contador++;


        return contador;
    }

    int baja(EPersona alu[],int contador)
    {
        int dni;
        int j;
        int k=0;
        int flag=0;
        printf("\nBorrar datos de personas, DNI: ");
        scanf("%d",&dni);
        for(k=0;k<contador-1;k++)
        {
            if(alu[k].dni==dni)
            {
                for(j=k;j<contador-1;j++)
                {
                    alu[j]=alu[j+1];
                    flag=1;
                }

            }

        }

        if(flag==0)
        {
            printf("\nNo se encuentra el DNI buscado!!\n");
        }
        else
        {
            printf("la baja ha sido existosa");
            contador=contador-1;
            return contador;
        }
        return contador;
    }

    void buscar(EPersona alu[],int contador)
    {
        int dni1;
        int k=0;
        int flag=0;
        printf("\nIngrese el DNI del alumno que desea buscar: ");
        scanf("%d",&dni1);
        for(k=0;k<contador;k++)
        {
            if(alu[k].dni==dni1)
            {
                printf("\nlos datos del alumno son:\n");
                printf("El nombre es: ");
                puts(alu[k].nombre);
                printf("La edad es: %d\n",alu[k].edad);
                printf("\n El estado es: %d",alu[k].estado);
                printf("\n El DNI es: %d",alu[k].dni);
                flag=1;
            }
        }
        if(flag==0) printf("\nNo se encuentra el DNI buscado!!\n\n");
        return;

    }
    void listar(EPersona alu[],int contador)
    {
        // Ordenamiento previo a listar

        // fin de ordenamiento
        int k;

        for(k=0;k<contador;k++)
        {
            printf("El nombre es: ");
            puts(alu[k].nombre);
            printf("La edad es: %d\n",alu[k].edad);
            printf("\n El estado es: %d",alu[k].estado);
            printf("\n El DNI es: %d",alu[k].dni);
            printf("\n\n");
        }
        return;

    }
    void graficar(void)
    {
        int i, hasta18=3, de19a35=5, mayorDe35=7, flag=0, mayor;

    if(hasta18 >= de19a35 && hasta18 >= mayorDe35){
        mayor = hasta18;
    }else{
        if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
        {
            mayor = de19a35;
        }
        else{
        mayor = mayorDe35;
        }
    }

    for(i=mayor; i>0; i--){
        if(i<10){
            printf("%02d|",i);
        }
        else
            printf("%02d|",i);

        if(i<= hasta18){
            printf("*");
        }
        if(i<= de19a35){
            flag=1;
            printf("\t*");
        }
        if(i<= mayorDe35){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
        //Bajo una linea luego de cada iteracion
        printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);

    return;
    }
