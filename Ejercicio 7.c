#include <stdio.h>
#include <stdlib.h>

void cambiarNegativosACero(int matriz[12][19]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 19; j++) {
			if (matriz[i][j] < 0) {
				matriz[i][j] = 0;
			}
		}
	}
}

void imprimirMatriz(int matriz[12][19]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 19; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int matriz[12][19] = {
		{1, -2, 3, -4, 5, 6, -7, 8, -9, 10, 11, -12, 13, -14, 15, 16, -17, 18, -19},
	};
	
	printf("Matriz original:\n");
	imprimirMatriz(matriz);
	
	cambiarNegativosACero(matriz);
	
	printf("\nMatriz con elementos negativos cambiados a cero:\n");
	imprimirMatriz(matriz);
	
	system("pause");
	return 0;
}
