/** 
* @file Simplex2.c
* @version 1.0
* @date 04/10/2020
* @author Miriam Andrew Quintana
* @brief Todas las funciones que se mencionan del Simplex1.h
*/
#include "Simplex1.h"

/** 
* @brief Nos permite introducir datos a nuestra tabla Simplex
* @param matriz Indica la tabla
* @param fi Indica las filas de la tabla
* @param co Indica las columnas de la tabla
* @return void
*/
void ingresar(float matriz[][TAM],int fi, int co){
	int a,b;
	for (a=0;a<fi;a++){
		for (b=0;b<co;b++){
			matriz[a][b]=0;
		}
    } 
	matriz [fi-1][0]=1;
}

/** 
* @brief Nos imprime en pantalla la tabla Simplex
* @param matriz Indica la tabla
* @param fi Indica las filas de la tabla
* @param co Indica las columnas de la tabla
* @return void
*/
void mostrar(float matriz[][TAM],int fi, int co){
	int a,b;
   for (a=0;a<fi;a++){
		for (b=0;b<co;b++){
			printf("  %f ",matriz[a][b]);
			if(b == co-1){
				printf("\n");
			}
		}
    }

}
/** 
* @brief Nos permite ingresar la función a maximizar
* @param matriz Indica la tabla
* @param fi Indica las filas de la tabla
* @return void
*/
void funcion(float matriz[][TAM],int fi){
	float x1,x2;
	printf("\n------>>Introduce la funcion a maximizar <<------\n");
	printf("Recuerda: a1.x1+b2.x2+...cn.Xn = d \n");
	
	printf("Introduce la variable x1: ");
	scanf("%f", &x1);
	x1=x1*-1;
	matriz [fi-1][1]=x1;
	fflush(stdin);	
	printf("Introduce la variable x2: ");
	scanf("%f", &x2);
	x2=x2*-1;
	matriz [fi-1][2]=x2;
	fflush(stdin);
}

/** 
* @brief Nos permite ingresar el número de restricciones
* @param matriz Indica la tabla
* @param co Indica las columnas de la tabla
* @param res Indica las restricciones
* @return void
*/
void restriccion(float matriz[][TAM],int co,int res){
	int a;
		printf("\n------>>Ingresa las %d funciones de restricciones<<------\n",res);
	for(a=0;a<res;a++){
		printf("\nIntroduce x1 de la restriccion %d: ",a+1);
		scanf("%f", &matriz[a][1]);
		fflush(stdin);
	    printf("Introduce x2 de la restriccion %d: ",a+1);
	    scanf("%f", &matriz[a][2]);
		fflush(stdin);
	    printf("Introduce el termino independiente %d: ",a+1);
	    scanf("%f", &matriz[a][co-1]);
		fflush(stdin);		
		matriz[a][a+3]=1;
	} 
}

/** 
* @brief Identifica la columna menor de la tabla
* @param matriz Indica la tabla
* @param fi Indica las filas de la tabla
* @param co Indica las columnas de la tabla
* @return noCol
*/
int menorC(float matriz[][TAM],int fi,int co){
   float mC=matriz[fi-1][0];
   int a,noCol;
   
	for(a= 0; a<co-1; a++){
		if(matriz[fi-1][a] < mC){
			mC= matriz[fi-1][a];
			noCol=a;
		}			
	}
    return (noCol);
}

/** 
* @brief Identifica la fila menor de la tabla
* @param matriz Indica la tabla
* @param fi Indica las filas de la tabla
* @param co Indica las columnas de la tabla
* @param noCol Indica una nueva columna
* @return noFi
*/
int menorF(float matriz[][TAM],int fi,int co,int noCol){
	float mF=matriz[0][co-1];
	int a,noFi;
	float matriz2[fi][1];
	
	for(a=0;a<fi-2;a++){
		matriz2[a][0]= matriz[a][co-1]/matriz[a][noCol];
		if (matriz2[a][0]<mF){
			mF=matriz2[a][0];
			noFi=a;
		}
	}
	return(noFi);
	
}

/** 
* @brief Divide la nueva fila entre el pivote
* @param matriz Indica la tabla
* @param co Indica las columnas de la tabla
* @param noFi Indica una nueva fila
* @param pivote Indica la intersección de la fila y columna 
* @return void
*/
void dividirP(float matriz[][TAM],int co, int noFi,int pivote){
	int a;
    	for(a=0;a<co;a++){
    		matriz[noFi][a]=matriz[noFi][a]/pivote;
	}
}

/** 
* @brief Indica una bueva fila
* @param matriz Indica la tabla
* @param noFi Indica una nueva fila
* @param noCol Indica una nueva columna
* @param co Indica las columnas de la tabla
* @param fi Indica las filas de la tabla
* @return void
*/
void filaNueva(float matriz[][TAM],int noFi,int noCol,int co,int fi){
	int a,b;
	for (a=0;a<noFi;a++){
    	float k=matriz[a][noCol];
		for (b=0;b<co;b++){
			matriz[a][b]=matriz[a][b]-(k*matriz[noFi][b]);
			}
	}
    
    for (a=noFi+1;a<fi;a++){
    	float k=matriz[a][noCol];
		for (b=0;b<co;b++){
			matriz[a][b]=matriz[a][b]-(k*matriz[noFi][b]);
			}
	}
}


