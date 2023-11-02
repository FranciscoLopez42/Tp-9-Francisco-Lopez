#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int matriz[4][4],fila=0,col=0;
	int ceros=0;
	for(fila=0;fila<4;fila++){
		for(col=0;col<4;col++){
			matriz[fila][col]=rand()%10;
			if(matriz[fila][col]==0){
				ceros++;
			}
		}
	}
	printf("\n\n");
	printf("Matriz generada: \n");
	for(fila=0;fila<4;fila++){
		for(col=0;col<4;col++){
			printf("%d ",matriz[fila][col]);
		}
		printf("\n");
	}
	printf("Cantidad de ceros en la matriz: %d\n",ceros);
	
	system("pause");
	return 0;
}
