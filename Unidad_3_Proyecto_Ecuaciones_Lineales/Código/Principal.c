/**
* @file Principal.c
* @version 1.0
* @date 23/11/2020
* @author Miriam Andrew Quintana
* @brief Programa Ecuaciones Lineales
  Las funciones imprimirCoordenadas e imprimirGrafica se encuentran al final de cada archivo gnuplot_i.c y gnuplot_i.h
*/

#include <stdio.h>
#include <stdlib.h>
#include "gnuplot_i.h"

int main() {
	/** @param m Indica la pendiente.*/
	int m;
	/** @param b Indica el punto de intercepción en el eje Y.*/
	int b;
	/** @param rango1 Indica el rango inicial.*/
	int rango1;
	/** @param rango2 Indica el rango final*/
	int rango2;
	
	printf("\n\t\t%c  ECUACIONES LINEALES  %c\n",186,186);
	printf("Ingresa el valor m -->");
	scanf("%d", &m);
	printf("Ingresa el valor b -->");
	scanf("%d", &b);
	printf("Rango inicial ------->");
	scanf("%d", &rango1);
	printf("Rango final --------->");
	scanf("%d", &rango2);
	
	imprimirCoordenadas(m, b, rango1, rango2);
	imprimirGrafica(m, b, rango1, rango2);
	
	return 0;
}


