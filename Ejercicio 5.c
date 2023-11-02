#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[6][6],fila=0,col=0;
	int menor=0,spc=0,en=0;
	for(fila=0;fila<15;fila++){
		for(col=0;col<12;col++){
			printf("Ingresar el numero de la posicion %d %d: ",fila+1,col+1);
			scanf("%d",&matriz[fila][col]);
		}
		printf("\n\n");
	}
	if(fila==0 && col==0){
		menor=matriz[fila][col];
	}else if(matriz[fila][col]<menor){
		menor=matriz[fila][col];
	}
	if(fila<5){
		spc+=matriz[fila][col];
	}
	if(col>=4 && col<=8 && matriz[fila][col]<0){
		en++;
	}
	
	printf("El menor elemento es: %d\n", menor);
	printf("La suma de los elementos de las 5 primeras filas es: %d\n", spc);
	printf("La cantidad de elementos negativos de la quinta fila a la novena es: %d\n", en);
	
	system("pause");
	return 0;
}
