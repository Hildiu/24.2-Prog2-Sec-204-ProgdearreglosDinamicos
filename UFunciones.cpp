//
// Created by mbermejo on 20/09/2024.
//

#include "UFunciones.h"


void llenarDatos(int *pA, int n)
{
    for(int indice=0; indice<n; indice++)
        pA[indice] = rand() % 20 + 1;
}

void imprimirArreglo(int *pA,int n)
{
    for(int i=0; i<n; i++)
        cout << setw(4) << pA[i];
}

int contar(int dato, int *pA, int n)
{
    int contador = 0;
    for(int i=0; i<n; i++)
        if(dato == pA[i])
            contador++;
    return contador;
}