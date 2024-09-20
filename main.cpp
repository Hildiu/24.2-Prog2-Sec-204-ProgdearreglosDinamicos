/*---------------------------------------------------------------------------------------
 * Dato de Entrada : n (int) representa el tamanio del array dinamico
 *                   dato (int) es el datoa buscar
 * Dato de Salida:   a (array de int) de tamanio n
 *                   aPosiciones  (array de int) contiene las posiciones del dato en a
 ---------------------------------------------------------------------------------------*/

#include "UFunciones.h"

int main()
{
   int n;
   int *pA = nullptr;
   int dato, ocurrencias;

   srand(time(nullptr));
   cout << "Numero de elementos del arreglo: ";
   cin >> n;
   pA = new int[n];    //--- dimensionado espacio en el heap
   llenarDatos(pA, n);
   imprimirArreglo(pA, n);
   cout << "\nIngrese dato a buscar: ";
   cin >> dato;
   ocurrencias = contar(dato, pA, n);
   if( ocurrencias == 0)
       cout << "No existe ese dato en el arreglo";
   else
   {
     int  *pNuevo = new int[ocurrencias];
     int j;
     j=0;
     for(int i=0; i<n; i++)
         if(dato == pA[i]) {
             pNuevo[j] = i;
             j++;
         }
     cout << "\n";
     imprimirArreglo(pNuevo,ocurrencias);
     delete []pNuevo;
     pNuevo = nullptr;

   }
   delete []pA;
   pA = nullptr;
    return 0;
}
