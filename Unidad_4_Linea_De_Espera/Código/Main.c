/**
* @file Main.c
* @version 1.0
* @date 18/12/2020
* @author Miriam Andrew Quintana
* @brief Fichero principal
*/
#include <stdio.h>
#include <stdlib.h>
#include "Espera1.h"
#define TAM 24

int main() {
	
	/** @param i Variable a utilizar en el ciclo for.*/
	int i;
	/** @param horaInicio Indica la hora de Inicio.*/
	int horaInicio;
	/** @param horaFinal Indica la hora Final.*/
	int horaFinal;
	/** @param clienAtendido Indica el número de clientes atendidos por hora.*/
	int clienAtendido;
    /** @param clienLlegan Indica el número de clientes que llegan al lugar.*/
	int clienLlegan[TAM];
	/** @param clienEspera Indica el número de clientes que estan en espera.*/
	int clienEspera[TAM];
	/** @param capacidad Indica la capacidad estimada de una caja en clientes atendidos por hora.*/
	int capacidad[TAM];
	/** @param cajas Indica el número de cajas abiertas.*/
	int cajas[TAM];
	/** @param output Indica las salidas acumuladas.*/
	int output[TAM];
	
	printf("\n\t\t%c  LINEA DE ESPERA  %c \n",186,186);
	printf("Rango de horas (1-24 horas)\n");
	printf("Ingrese la hora de inicio: ");
	scanf("%d", &horaInicio);
	printf("Ingrese la hora final: ");
	scanf("%d", &horaFinal);
	printf("Velocidad de clientes atendidos por horas: ");
    scanf("%d", &clienAtendido);
    
    /** @brief Ciclo repetitivo para pedir los datos al usuario.*/
    for (i=horaInicio; i<horaFinal; i++){
    	printf("\n Hora: %d - %d",i,(i+1));
    	printf("\n Clientes en espera: ");
    	scanf("%d",&clienLlegan[i]);
    	printf("Numero de cajas: ");
    	scanf("%d",&cajas[i]);
    	capacidad[i] = clienAtendido*cajas[i];
	}
	
	printf("\n\n*********************************** || TABLA || *************************************");
	printf("\nHora\t\t\t");
	imprimirHoras(horaInicio, horaFinal);
	printf("\nLlegada de clientes\t");
	imprimir(clienLlegan, horaInicio, horaFinal);
    printf("\nNo. de cajas abiertas\t");
    imprimir(cajas, horaInicio, horaFinal);
    printf("\nCapacidad de salida\t");
    imprimir(capacidad, horaInicio, horaFinal);
    printf("\nSalida de clientes\t");
    espera(capacidad, clienLlegan, clienEspera, horaInicio, horaFinal);
    salida(capacidad, clienLlegan, clienEspera, output, horaInicio, horaFinal);
    printf("\nLinea de espera\t\t");
    imprimir(clienEspera, horaInicio, horaFinal);
    printf("\nInput\t\t\t");
    input(clienLlegan,horaInicio, horaFinal);
    printf("\nOutput\t\t\t");
    imprimir(output, horaInicio, horaFinal);
    printf("\n\n************************************************************************************");

	
	return 0;
}
