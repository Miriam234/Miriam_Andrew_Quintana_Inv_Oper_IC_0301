/**
* @file Menup.c
* @version 1.0
* @date 04/10/2020
* @author Miriam Andrew Quintana
* @brief Fichero principal
*/

#include <stdio.h>
#include <stdlib.h>
#include "Simplex1.h"

int main(int argc, char** argv) {
	/** @param Indica la tabal Simplex*/
    float matriz [TAM][TAM]; 
	/** @param filas Indica las filas de la tabla Simplex*/
	int filas;
	/** @param columnas Indica las columnas de la tabla Simplex*/
	int columnas;
	/** @param res Indica el número de restricciones*/
	int res;
	/** @param a Indica la variable x1 */
	int a;
	/** @param Indica la variable x2*/
	int b;
	
	
	printf("\n\t\t%c  METODO SIMPLEX  %c \n",186,186);
	printf("Introduce el numero de restricciones que hay: ");
	scanf("%d", &res);
	
	filas=res+1;
	columnas=4+res;
    
	ingresar(matriz,filas,columnas);	
	funcion(matriz,filas);                 
	restriccion(matriz,columnas,res);		      
    printf("\n\t\t%c  Tabla Simplex #1  %c \n",186,186);
    mostrar(matriz,filas,columnas); 
    int ncolumna=menorC(matriz,filas,columnas);
    int nfila=menorF(matriz,filas,columnas,ncolumna);
    int pivote= matriz[nfila][ncolumna];
    
	printf("El elemnto pivote es %d \n",pivote);
	printf("En la fila %d \n",nfila+1);
	printf("En la columna %d \n",ncolumna+1);
	
	dividirP(matriz,columnas,nfila,pivote);
	filaNueva(matriz,nfila,ncolumna,columnas,filas);
	
	printf("\n\t\t%c  Tabla Simplex #2  %c \n",186,186);
	mostrar(matriz,filas,columnas);
	  
	printf("\nLos resultados de la funcion Z son: ");    
    printf("\n   Resultado de Z: %f",matriz[filas-1][columnas-1]);
    printf("\n   Resultado de x%d: %f \a",b,0);
    printf("\n   Resultado de x%d: %f",a,matriz[nfila][columnas-1]);
   

	return 0;
}
