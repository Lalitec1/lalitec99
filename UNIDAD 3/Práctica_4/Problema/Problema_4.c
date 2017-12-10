#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
#define GRAV 386.2204
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float area(float diam);
float volumen(float ar,float alt);
float fuerza(float masa);
float presion(float fuer,float ar);

int main(int argc, char *argv[]) {
	int nc,i;
	printf("Cuantos cilindros desea ocupar?\n");
	scanf("%d",&nc);
	if(nc>0 && nc<=4){
	float diametro[nc];
	float carr[nc];
	float vol[nc];
	float masa[nc];
	float pres[nc];
    
    
    for(i=0;i<nc;i++){
    	printf("Por favor introduzca el diametro del cilindro en pulgadas %d:",i+1);
    	scanf("%f",&diametro[i]);
    	printf("Por favor introduzca la carrera del cilindro en pulgadas %d:",i+1);
    	scanf("%f",&carr[i]);
    	vol[i]=volumen(area(diametro[i]),carr[i]);
    	printf("Por favor introduzca la masa en libras colocada en el cilindro %d:",i+1);
    	scanf("%f",&masa[i]);
    	pres[i]=presion(fuerza(masa[i]),area(diametro[i]));
	}
    
    printf("  No. cil     Masa    Area    Volumen de aceite    Presion\n");
    for(i=0;i<nc;i++){
    printf("    %d         %.2f    %.2f        %.4f         %.2f",i+1,masa[i],area(diametro[i]),vol[i],pres[i]);
    printf("\n");
	}
    
    }else{
	printf("El maximo de cilindros premitidos son 4 y el minimo es 1\n");
    }
	return 0;
}

float area(float diam){
	float a;
	a=PI*diam;
	return a;
}
float volumen(float ar,float alt){
	float vol;
	vol=ar*alt;
	return vol;
}
float fuerza(float masa){
	float f;
	f=GRAV*masa;
	return f;
}
float presion(float fuer,float ar){
	float p;
	p=fuer/ar;
	return p;
}

