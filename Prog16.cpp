/* Autor: Xavier Romero Hernández, Realizado: 17/02/2022 
	*/
	
#include <stdio.h>

int main(){
	float a1,a2,a3,a4,a5,b,peso,grasa;
	int genero;
	
	printf("Introduce tu genero (1.hombre), (2.mujer): ");
	scanf("%d",&genero);
	printf("Introduce tu peso: ");
	scanf("%f",&peso);
	printf("Introduce la medida de la muñeca: ");
	scanf("%f",&a2);
	switch(genero){
		case 1:
			a1=(peso*1.082)+94.42;
			a2=a2*4.15;
			b=a1-a2;
			break;
		case 2:
			printf("Introduce la medida de la cintura(a la altura del ombligo): ");
			scanf("%f",&a3);
			printf("Introduce la medida de la cabeza: ");
			scanf("%f",&a4);
			printf("Introduce la medida del antebrazo: ");
			scanf("%f",&a5);
			a1=(peso*0.732)+8.987;
			a2=a2/3.14;
			a3=a3*0.157;
			a4=a4*0.249;
			a5=a5*0.434;
			b=a1+a2-a3-a4+a5;
			break;
		default:
			printf("Opcion no valida");
			break;
	}
	grasa=peso-b;
	printf("Tu porcentaje de grasa corporal es de: %f",(grasa*100)/peso);
	return 0;
}
