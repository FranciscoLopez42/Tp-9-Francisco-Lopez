#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Chofer {
	int legajo;
	int horasTrabajadas[6];
	float sueldoHora;
	float sueldoSemanal;
	int totalHorasSemana;
	char nombre[50];
};

void calcularTotalHorasSemanal(struct Chofer choferes[], int cantidadChoferes, int diasTrabajados) {
	for (int i = 0; i < cantidadChoferes; i++) {
		choferes[i].totalHorasSemana = 0;
		for (int j = 0; j < diasTrabajados; j++) {
			choferes[i].totalHorasSemana += choferes[i].horasTrabajadas[j];
		}
	}
}

void calcularSueldoSemanal(struct Chofer choferes[], int cantidadChoferes) {
	for (int i = 0; i < cantidadChoferes; i++) {
		choferes[i].sueldoSemanal = choferes[i].totalHorasSemana * choferes[i].sueldoHora;
	}
}

void calcularTotalEmpresa(struct Chofer choferes[], int cantidadChoferes, float *totalEmpresa) {
	*totalEmpresa = 0;
	for (int i = 0; i < cantidadChoferes; i++) {
		*totalEmpresa += choferes[i].sueldoSemanal;
	}
}

void choferConMasHorasLunes(struct Chofer choferes[], int cantidadChoferes) {
	int maxHorasLunes = choferes[0].horasTrabajadas[0];
	int index = 0;
	
	for (int i = 1; i < cantidadChoferes; i++) {
		if (choferes[i].horasTrabajadas[0] > maxHorasLunes) {
			maxHorasLunes = choferes[i].horasTrabajadas[0];
			index = i;
		}
	}
	
	printf("El chofer que trabaja más horas el día lunes es: %s\n", choferes[index].nombre);
}

void imprimirReporte(struct Chofer choferes[], int cantidadChoferes, float totalEmpresa) {
	printf("Reporte de la compañía de transporte:\n");
	printf("=======================================\n");
	
	for (int i = 0; i < cantidadChoferes; i++) {
		printf("Nombre: %s\n", choferes[i].nombre);
		printf("Legajo: %d\n", choferes[i].legajo);
		printf("Total de horas trabajadas a la semana: %d\n", choferes[i].totalHorasSemana);
		printf("Sueldo semanal: %.2f\n", choferes[i].sueldoSemanal);
		printf("---------------------------------------------------\n");
	}
	
	printf("Total a pagar por la empresa: %.2f\n", totalEmpresa);
}

int main() {
	int cantidadChoferes = 5;
	int diasTrabajados = 6;
	
	struct Chofer choferes[] = {
		{1, {8, 7, 8, 8, 8, 6}, 20.5, 0, 0, "Juan"},
	{2, {9, 8, 7, 8, 9, 6}, 18.75, 0, 0, "Pedro"},
		{3, {8, 8, 8, 8, 8, 8}, 22.0, 0, 0, "Luis"},
	{4, {7, 7, 7, 7, 7, 7}, 15.0, 0, 0, "Maria"},
		{5, {6, 6, 6, 6, 6, 6}, 17.5, 0, 0, "Ana"}
	};
	
	calcularTotalHorasSemanal(choferes, cantidadChoferes, diasTrabajados);
	calcularSueldoSemanal(choferes, cantidadChoferes);
	
	float totalEmpresa;
	calcularTotalEmpresa(choferes, cantidadChoferes, &totalEmpresa);
	
	choferConMasHorasLunes(choferes, cantidadChoferes);
	
	imprimirReporte(choferes, cantidadChoferes, totalEmpresa);
	
	system("pause");
	return 0;
}
