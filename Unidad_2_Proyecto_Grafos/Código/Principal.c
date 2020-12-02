#include <stdio.h>
#include <stdlib.h>
#include "Grafo1.h"
/**
* @file Principal.co
* @version 1.0
* @date 30/10/2020
* @author Miriam Andrew 
* @brief Fichero principal
*/

int main(int argc, char *argv[]) {
	/** @param nodos Indica el número de nodos*/
	int nodos;
	/** @param ady Indica el número de adyacencias */
	int ady;
	/** @param fc Indica que el número de nodos va ser el mismo número que el de las filas y columnas */
	int fc;
	/** @param a Indica el punta A, que se va a buscar */
	int a;
	/** @param b Indica el punta B, que se va a buscar*/
	int b;
	/** @param s Indica la función buscar*/
	int s; 
	/** @param op Para volver a repetir el programa*/
	int op;
	/** @param matriz Para ingresar e imprimir datos en la tabla*/
	int matriz [TAM][TAM];
	
	/** @par Imprime en pantalla la palabra "GRAFOS" */
	printf("\n\t\t%c  GRAFOS  %c \n",186,186);
	/** @par Pide al usuario */
	printf("Introduce el numero de NODOS que hay: ");
	scanf("%d", &nodos);
	fc = nodos;
	
	Insertar(matriz,fc); 
	printf("\nIntroduce el numero de ADYACENCIAS que hay: ");
	scanf("%d", &ady);
	Adyacencia(matriz,ady);
	Mostrar(matriz,fc);
	
	/** @todo Implementarlo en una función en Grafo2.c */
	while(op==0){
	printf("Ruta a buscar\n");
	printf("Punto A:\n");
	scanf("%d", &a);
	printf("Punto B:\n");
	scanf("%d", &b);
	s = buscar (matriz,a,b,fc);
	if (s==1){
		printf("\nSI EXISTE UNA RUTA");
	}
	else {
		printf("\nNO EXISTE UNA RUTA");
	}
	printf("\nPara buscar otra ruta oprima 0\nSi desea salir oprima 1: ");
	scanf("%d", &op);
	}

	return 0;
	
}
