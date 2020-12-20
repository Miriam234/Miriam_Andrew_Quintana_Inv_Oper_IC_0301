/** 
* @file Linea.c
* @version 1.0
* @date 18/12/2020
* @author Miriam Andrew Quintana
* @brief Todas las funciones que se mencionan de la cabecera Espera1.h
*/

#include "Espera1.h"

/** 
* @brief Imprime la tabla de Linea de Espera
* @param numero Indica la tabla
* @param a Indica las filas de la tabla
* @param b Indica las columnas de la tabla
* @return void
*/
void imprimir(int numero[TAM], int a, int b){
	int i;
	for(i=a; i<b; i++){
		printf("%d\t", numero[i]);
	}
	printf("\n");
}

/** 
* @brief Imprime el rango de horas
* @param a Indica la hora de Inicio
* @param b Indica la hora Final
* @return void
*/
void imprimirHoras(int a, int b){
	int i;
	for(i=a;i<b;i++){
		printf("%d-%d\t",i,i+1);
	}
	printf("\n");
}

/** 
* @brief Función para la salida de clientes
* @param numero Indica la capacidad
* @param numero2 Indica el número de clientes que llegan
* @param clienEspera Indica el número de clientes en espera
* @param output Indica las salidas acumuladas
* @param a Indica la hora de Inicio
* @param b Indica la hora Final
* @return void
*/
void salida(int numero[TAM], int numero2[TAM], int clienEspera[TAM], int output [TAM], int a, int b){
	int i;
	int salida;
	output[a-1]=0;
	for(i=a;i<b;i++){
		if(clienEspera[i]==0){
			salida=numero2[i];
			printf("%d\t", salida);
		}
		else{
			salida=numero[i];
			printf("%d\t", salida);
		}
		output[i]=salida+output[i-1];
	}
	printf("\n");
}

/** 
* @brief Función para la espera de clientes
* @param numero Indica la capacidad
* @param numero2 Indica el número de clientes que llegan
* @param clienEspera Indica el número de clientes en espera
* @param a Indica la hora de Inicio
* @param b Indica la hora Final
* @return void
*/
void espera(int numero[TAM], int numero2[TAM], int clienEspera[TAM], int a, int b){
	int i;
	clienEspera[a-1]=0;
	for(i=a;i<b;i++){
		clienEspera[i]=numero2[i]-numero[i]+ clienEspera[i-1];
		if(clienEspera[i]<0){
			clienEspera[i]=0;
		}
	}
}

/** 
* @brief Función para las entradas acumuladas
* @param numero Indica las salidas acumuladas
* @param a Indica la hora de Inicio
* @param b Indica la hora Final
* @return void
*/
void input(int numero[TAM], int a, int b){
	int i; 
	int input=0;
	for(i=a;i<b;i++){
		input+=numero[i];
		printf("%d\t", input);
	}
	printf("\n");
}
