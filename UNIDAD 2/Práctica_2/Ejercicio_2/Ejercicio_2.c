#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float prom,sum=0,dato;
	int i=0;
	printf("Por favor ingrese las 5 calificaciones para generar su promedio\n");
	while(i<=4){
	scanf("%f",&dato);
	sum=sum+dato;
	i++;
}
	prom=sum/5;
	printf("Tu promedio es %.2f\n",prom);
	if(prom>=6){
		printf("APROBADO\n");
	}else{
		printf("NO APROBADO\n");
	}
	return 0;
}
