#include <stdio.h>
#include <stdlib.h>

int main(){
	const int t=3;
	int matriz1[3][3],matriz2[3][3],fila=0,col=0;
	int iguales=1;
	printf("Ingrese los elementos de la matriz 1: \n");
	for(fila=0;fila<t;fila++){
		for(col=0;col<t;col++){
			printf("Ingrese los elementos de la posicion %d %d: ",fila+1,col+1);
			scanf("%d",&matriz1[fila][col]);
		}
		printf("\n\n");
	}
	printf("Ingrese los elementos de la matriz 2: \n");
	for(fila=0;fila<t;fila++){
		for(col=0;col<t;col++){
			printf("Ingrese los elementos de la posicion %d %d: ",fila+1,col+1);
			scanf("%d",&matriz2[fila][col]);
		}
		printf("\n\n");
	}
	for(fila=0;fila<t;fila++){
		if(matriz1[fila][col]==matriz2[fila][col]){
			iguales=0;
			break;
		}
	}
	if(iguales){
		printf("Las diagonales principales de las dos matrices son iguales\n");
	}else{
		printf("Las diagonales principales de las dos matrices no son iguales\n");
	}
	
	system("pause");
	return 0;
}
