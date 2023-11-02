#include <stdio.h>
#include <stdlib.h>

int main(){
	int ventas[5][5],fila=0,col=0,mayorventa=0;
	for(fila=0;fila<5;fila++){
		printf("Ingrese el numero de ventas del empleado %d durante la semana: \n",fila+1);
		for(col=0;col<5;col++){
			printf("Dia %d: $",col+1);
			scanf("%d",&ventas[fila][col]);
		}
	}
	mayorventa=ventas[0][0];
	for(fila=0;fila<5;fila++){
		for(col=0;fila<5;fila++){
			if(ventas[fila][col]>mayorventa){
				mayorventa=ventas[fila][col];
			}
		}
	}
	printf("Mayor venta realizada: $%d\n",mayorventa);
	
	system("pause");
	return 0;
}
