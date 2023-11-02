#include <stdio.h>
#include <stdlib.h>

int contarNegativos(int matriz[][6], int filas, int columnas) {
	int contadorNegativos = 0;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (matriz[i][j] < 0) {
				contadorNegativos++;
			}
		}
	}
	return contadorNegativos;
}

int contarDiagonalCero(int matriz[][6], int filas, int columnas) {
	int contadorDiagonalCero = 0;
	for (int i = 0; i < filas && i < columnas; i++) {
		if (matriz[i][i] == 0) {
			contadorDiagonalCero++;
		}
	}
	return contadorDiagonalCero;
}

int main() {
	int matriz[5][6] = {
		{1, -2, 3, -4, 5, 6},
	{6, 5, -4, 3, -2, 1},
		{0, 9, 8, 7, -6, -5},
	{1, 2, 3, -4, 5, 6},
		{-6, -5, -4, -3, -2, -1}
	};
	
	int filas = 5;
	int columnas = 6;
	
	printf("La matriz es:\n");
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	int negativos = contarNegativos(matriz, filas, columnas);
	int diagonalCero = contarDiagonalCero(matriz, filas, columnas);
	
	printf("\nCantidad de elementos negativos en la matriz: %d\n", negativos);
	printf("Cantidad de elementos de la diagonal principal iguales a cero: %d\n", diagonalCero);
	
	system("pause");
	return 0;
}
