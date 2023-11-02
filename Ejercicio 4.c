#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int i;
	printf("Ingrese la cantidad de elementos que va a tener el vector: ");
	scanf("%d",&n);
	int vector1[n];
	int vector2[n];
	printf("Ingrese los elementos del primer vector: \n");
	for(i=0;i<n;i++){
		scanf("%d",&vector1[i]);
	}
	for(i=0;i<n;i++){
		vector2[(i+1)%n]=vector1[i];
	}
	printf("El segundo vector reorganizado es: \n");
	for(i=0;i<n;i++){
		printf("%d ",vector2[i]);
	}
	
	system("pause");
	return 0;
}
