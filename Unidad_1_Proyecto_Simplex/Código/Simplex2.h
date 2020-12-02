#include "Simplex1.h"


void insertar(float m[][TAM], int fi, int co){
	int a,b;
	for (a=0;a<fi;a++){
		for (b=0;b<co;b++){
			m[a][b]=0;
		}
    } 
	m[fi-1][0]=1; 
	
}
void imprimir(float m[][TAM], int fi, int co){
	int a,b;
	for (a=0;a<fi;a++){
		for (b=0;b<co;b++){
			printf("%f",m[a][b]);
			if(b == co-1){
				printf("\n");
			}
		}
    }
	
}
void introducir_funcion(float m[][TAM], int fi){
	float x1, x2;
	printf("\n------>>Introduce la funcion a maximizar <<------\n");
	printf("Recuerda: a1.x1+b2.x2+...cn.Xn = d \n");
	
	printf("Introduce la variable x1: ");
	scanf("%f", &x1);
	x1=x1*-1;
	m [fi-1][1]=x1;
	fflush(stdin);	
	printf("Introduce la variable x2: ");
	scanf("%f", &x2);
	x2=x2*-1;
	m [fi-1][2]=x2;
	fflush(stdin);
}
void introducir_restriccion(float m[][TAM], int co, int res){
	int a, b;
	printf("\n------>>Ingresa las %d funciones de restricciones<<------\n",res);
	for(a=0;a<res;a++){
		printf("\nIntroduce x1 de la restriccion %d: ",a+1);
		scanf("%f", &m[a][1]);
		fflush(stdin);
	    printf("Introduce x2 de la restriccion %d: ",a+1);
	    scanf("%f", &m[a][2]);
		fflush(stdin);
	    printf("Introduce el termino independiente %d: ",a+1);
	    scanf("%f", &m[a][co-1]);
		fflush(stdin);		
		m[a][a+3]=1;	
	} 
	
}
int menorCo(float m[][TAM], int fi, int co){
   int a;
   float mC=m[fi-1][0];
   int nColumna;
   
	for(a= 0; a<co-1; a++){
		if(m[fi-1][a] < mC){
			mC= m[fi-1][a];
			nColumna=a; //checar
		}			
	}
}

int menorFi(float m[][TAM], int fi, int co, int nColumna){
	int a;
	float mF=m[0][co-1];
	int nFila;
	float m2[fi][1];
	
	for(a=0;a<fi-2;a++){
		m2[a][0]= m[a][co-1]/m[a][nColumna];
		if (m2[a][0]<mF){
			mF=m2[a][0];
			nFila=a;
		}
	}
	
}
void dividirP(float m[][TAM], int co, int nFila, int pivote){
	int a;
	int pivote= m[nFila][nColumna];
	for(a=0;a<co;a++){
		
		m[nFila][a]=m[nFila][a]/pivote;
	}
	
}
void filaN(float m[][TAM], int nFila, int nColumna, int co, int fi){
	int a, b;
	for (a=0;a<fi;a++){
		for (b=0;b<co;b++){
			printf("%f",m[a][b]);
			if(b == co-1){
				printf("\n");
			}
		}
    }
    
    for (a=0;a<nFila;a++){
    	float k=m[a][nColumna];
		for (b=0;b<co;b++){
			m[a][b]=m[a][b]-(k*m[nFila][b]);
			}
	}
    
    for (a=nFila+1;a<fi;a++){
    	float k=m[a][nColumna];
		for (b=0;b<co;b++){
			m[a][b]=m[a][b]-(k*m[nFila][b]);
			}
	}
	
}
