#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float volumen(float ancho, float alto, float largo){
	float vol;
	vol=ancho*alto*largo;
	return vol;
}

int main(int argc, char *argv[]) {
	float anch[3],lar[3],alt[3], vol[3],volt;
	int i;
	
	for(i=1;i<=3;i++){
	printf("Por favor introduza el ancho de la habitacion %d en metros\n",i);
	scanf("%f",&anch[i-1]);
	printf("Por favor introduza el largo de la habitacion %d en metros\n",i);
	scanf("%f",&lar[i-1]);
	printf("Por favor introduza el alto de la habitacion %d en metros\n",i);
	scanf("%f",&alt[i-1]);
	}
	
	for(i=0;i<=2;i++){
		vol[i]=volumen(anch[i],alt[i],lar[i]);
	}
	
	volt=vol[0]+vol[1]+vol[2];
	
	for(i=1;i<=3;i++){
		printf("El volumen de la habitacion %d es:%.2f en metros cuadrados\n",i,vol[i-1]);
	}
	
	printf("El volumen total es:%.2f en metros cuadrados\n",volt);
	
	return 0;
}
