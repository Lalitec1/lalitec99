#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double hipotenusa(double lado1, double lado2){
	double hip,c1,c2;
	c1=pow(lado1,2);
	c2=pow(lado2,2);
	hip=sqrt(c1+c2);
	return hip;
}

int main(int argc, char *argv[]) {
	double lado1[3],lado2[3],hip[3];
	int i;
	
	printf("El programa calcula la hipotenusa de tres triangulos\n");
	for(i=1;i<=3;i++){
		printf("Ingrese el lado 1 del triangulo %d\n",i);
		scanf("%lf",&lado1[i-1]);
		printf("Ingrese el lado 2 del triangulo %d\n",i);
		scanf("%lf",&lado2[i-1]);
	}
	
	for(i=0;i<=2;i++){
		hip[i]=hipotenusa(lado1[i],lado2[i]);
	}
	
	for(i=1;i<=3;i++){
		printf("La hipotenusa del triangulo %d mide %.2lf\n",i,hip[i-1]);
	}
	
	return 0;
}
