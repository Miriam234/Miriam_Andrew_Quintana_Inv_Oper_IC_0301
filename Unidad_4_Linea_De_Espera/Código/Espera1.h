/**
* @file Espera1.h
* @version 1.0
* @date 18/12/2020
* @author Miriam Andrew Quintana
* @brief Cabecera del fichero Linea.c
*/
#ifndef __Espera1_H

#define __Espera1_H

#include <stdio.h>
/** @brief Constante que tendrá el mismo valor a lo largo de todo el programa.*/
#define TAM 24

/** 
* @brief Imprime la tabla de Linea de Espera
* @param numero Indica la tabla
* @param a Indica las filas de la tabla
* @param b Indica las columnas de la tabla
*/
void imprimir(int numero[TAM], int a, int b);

/** 
* @brief Imprime el rango de horas
* @param a Indica la hora de Inicio
* @param b Indica la hora Final
*/
void imprimirHoras(int a, int b);

/** 
* @brief Función para la salida de clientes
* @param numero Indica la capacidad
* @param numero2 Indica el número de clientes que llegan
* @param clienEspera Indica el número de clientes en espera
* @param output Indica las salidas acumuladas
* @param a Indica la hora de Inicio
* @param b Indica la hora Final
*/
void salida(int numero[TAM], int numero2[TAM], int clienEspera[TAM], int output [TAM], int a, int b);

/** 
* @brief Función para la espera de clientes
* @param numero Indica la capacidad
* @param numero2 Indica el número de clientes que llegan
* @param clienEspera Indica el número de clientes en espera
* @param a Indica la hora de Inicio
* @param b Indica la hora Final
*/
void espera(int numero[TAM], int numero2[TAM], int clienEspera[TAM], int a, int b);

/** 
* @brief Función para las entradas acumuladas
* @param numero Indica las salidas acumuladas
* @param a Indica la hora de Inicio
* @param b Indica la hora Final
*/
void input(int numero[TAM], int a, int b);

#endif
