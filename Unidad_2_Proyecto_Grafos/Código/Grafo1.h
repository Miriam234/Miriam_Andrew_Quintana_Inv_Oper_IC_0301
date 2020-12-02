/**
* @file Grafo1.h
* @version 1.0
* @date 30/10/2020
* @author Miriam Andrew 
* @brief Cabecera del fichero Grafo2.c
*/
#ifndef __Grafo1_H

#define __Grafo1_H

#include <stdio.h>

/** @brief Define el número de columnas y filas*/
#define TAM 50

/** 
* @brief Permite ingresar el numero de nodos
* @param matriz Indica las coordenadas x,y
* @param nc Indica la cantidad de nodos 
*/
void Insertar(int matriz[][TAM],int nc);

/**
* @brief Su función es imprimir la tabla 
* @param matriz Indica las coordenadas x,y
* @param nc Indica la cantidad de nodos ingresados por el usuario
*/
void Mostrar(int matriz[][TAM],int nc);

/**
* @brief Esta función nos permite ingresar el número de adyacencias del grafo
* @param matriz Indica las coordenadas x,y
* @param fi Indica el numero de adyacencias ingresadas por el usuario
*/
void Adyacencia(int matriz[][TAM],int fi);

/**
* @brief Nos permite buscar en las coordenadas si existe al menos una ruta del punto A al punto B
* @param matriz Muestra las coordenadas x,y
* @param a Indica las filas
* @param b Indica las columnas
* @param fi Indica las adyacencias
*/
int buscar(int matriz[][TAM],int a,int b,int fi);
#endif


