#include <stdio.h>
#include <stdlib.h>
#include "utn.h" //nunca incluyo un .c , solo los .h


int main()
{
    int numeroInt;
    float numeroFloat;

    if(utn_getEntero(&numeroInt,3,"Numero guardado exitosamente.","Error al ingresar numero. ",119,0) == 0)
    {
        printf("\nEl numero es: %d\n",numeroInt);

    }
    else
    {
        printf("\nNo se pudo guardar el numero, reintente mas tarde");
    }

    if(utn_getFlotante(&numeroFloat,3,"\nNumero guardado exitosamente","\nError al ingresar numero",119,0)==0)
    {
        printf("\nEl numero es: %.2f",numeroFloat);
    }
    else
    {
        printf("\nNo se pudo guardar el numero, reintente mas tarde");
    }
    return 0;
}


