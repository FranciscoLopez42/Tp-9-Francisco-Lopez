#include <stdio.h>
#include <stdlib.h>

int main(){
	int choferes[20][7],fila=0,col=0,totalsemana=0;;
	for(fila=0;fila<20;fila++){
			printf("Ingrese los kilometros hechos por el chofer %d en la semana:\n",fila+1);
			for(col=0;col<7;col++){
				printf("Dia %d\n",col+1);
				scanf("%d",&choferes[fila][col]);
			}
	}
	printf("\nKilometros conducidos:\n");
	for(fila=0;fila<20;fila++){
		printf("Chofer %d\n",fila+1);
	for(col=0;col<7;col++){
		printf("Dia %d: %d kilometros\n",col+1,choferes[fila][col]);
		totalsemana+=choferes[fila][col];
	}
	printf("Total de la semana: %d kilometros hechos\n",totalsemana);
	}
	
	system("pause");
	return 0;
}
