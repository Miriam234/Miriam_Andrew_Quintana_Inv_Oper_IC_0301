/**
* @file Simplex1.h
* @version 1.0
* @date 04/10/2020
* @author Miriam Andrew Quintana
* @brief Cabecera del fichero Simplex2.c
*/

#ifndef __Simplex1_H

#define __Simplex1_H

#include <stdio.h>

/** @brief Define el número de columnas y filas*/
#define TAM 50

/** 
* @brief Nos permite introducir datos a nuestra tabla Simplex
* @param matriz Indica la tabla
* @param fi Indica las filas de la tabla
* @param co Indica las columnas de la tabla
*/
void ingresar(float matriz[][TAM],int fi, int co);
/** 
* @brief Nos imprime en pantalla la tabla Simplex
* @param matriz Indica la tabla
* @param fi Indica las filas de la tabla
* @param co Indica las columnas de la tabla
*/
void mostrar(float matriz[][TAM],int fi, int co);
/** 
* @brief Nos permite ingresar la función a maximizar
* @param matriz Indica la tabla
* @param fi Indica las filas de la tabla
*/
void funcion(float matriz[][TAM],int fi);
/** 
* @brief Nos permite ingresar el número de restricciones
* @param matriz Indica la tabla
* @param co Indica las columnas de la tabla
* @param res Indica las restricciones
*/
void restriccion(float matriz[][TAM],int co,int res);
/** 
* @brief Identifica la columna menor de la tabla
* @param matriz Indica la tabla
* @param fi Indica las filas de la tabla
* @param co Indica las columnas de la tabla
*/
int menorC(float matriz[][TAM],int fi,int co);
/** 
* @brief Identifica la fila menor de la tabla
* @param matriz Indica la tabla
* @param fi Indica las filas de la tabla
* @param co Indica las columnas de la tabla
* @param noCol Indica una nueva columna
*/
int menorF(float matriz[][TAM],int fi,int co,int noCol);
/** 
* @brief Divide la nueva fila entre el pivote
* @param matriz Indica la tabla
* @param co Indica las columnas de la tabla
* @param noFi Indica una nueva fila
* @param pivote Indica la intersección de la fila y columna pivote
*/
void dividirP(float matriz[][TAM],int co, int noFi,int pivote);
/** 
* @brief Indica una bueva fila
* @param matriz Indica la tabla
* @param noFi Indica una nueva fila
* @param noCol Indica una nueva columna
* @param co Indica las columnas de la tabla
* @param fi Indica las filas de la tabla
*/
void filaNueva(float matriz[][TAM],int noFi,int noCol,int co,int fi);

#endif
