/** 
* @file Grafo2.c
* @version 1.0
* @date 30/10/2020
* @author Miriam Andrew 
* @brief Todas las funciones que se mencionan del Grafo1.h
*/
#include "Grafo1.h"

/** 
* @brief Ingresar el número de nodos que hay en el grafo 
* @todo Usar variables de que se relacionen de acuerdo al programa
*/
void Insertar(int matriz[][TAM],int nc){
/** @param a Indica las filas */
   int a;
/** @param b Indica las columnas */
   int b;
	for (a=0;a<nc;a++){
		for (b=0;b<nc;b++){
			matriz[a][b]=0;
		}
    } 
	
}

/**
* @brief Ingresar el numero de adyacencias que hay en el grafo */
void Adyacencia(int matriz[][TAM],int fi){
/** @param a Indica las filas */
	int a;
/** @param X Indica la coordenada X */
	int X;
/** @param Y Indica la coordenada Y*/
	int Y;
	for(a=0;a<fi;a++){
	
	printf("\nIntroduce las coordenadas de la adyacencia %d \n",a+1);
	printf("Introduce la coordenada x: ");
	scanf("%d", &X);
	printf("Introduce la coordenada y: ");
	scanf("%d", &Y);
	matriz [X-1][Y-1]=1;
 }

}

/** 
* @brief Muestra la tabla con 0 y 1 según las coordenadas ingresadas
* @todo Que se muestre cada vez que se ingrese una nueva coordenada
*/
void Mostrar(int matriz[][TAM],int nc){
/** @param a Indica las filas */
   int a;
/** @param b Indica las columnas */
   int b;
   printf("\n|x\\y|\t"); 
   for (b=0;b<nc;b++){
   	printf("%d\t",b+1);
    }
    printf("\n...");
    for (b=0;b<nc;b++){
    	printf("........");
	}
	printf("\n");
	for (a=0;a<nc;a++){
		printf("\n|%d|\t",a+1);
		for (b=0;b<nc;b++){
			printf("%d\t",matriz[a][b]);
			if(b == nc-1){
				printf("\n");
		}
	}
  }
}


/**
* @brief Busca si existe algún camino del punto A al punto B
* @todo Sigue incompleta para saber si existe por lo menos algún camino 
* @return buscar
*/
int buscar(int matriz[][TAM],int a,int b,int fi){
	int d;
	if (matriz[a-1][b-1]==1){
		return 1;
	}
	else {
		for (d=0;d<fi;d++){
			if (matriz[a-1][d]!=0){
				return buscar(matriz,a+1,b,fi);
			}
    }
	}

}
