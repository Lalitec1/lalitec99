#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float entero_potencia(float base, int exp){
	float res;
	res=pow(base,exp);
	return res;
}

int main(int argc, char *argv[]) {
	float base,tot;
	int exp;
	
	printf("Por favor ingrese la base del numero\n");
	scanf("%f",&base);
	printf("Por favor ingrese el exponente del numero\n");
	scanf("%d",&exp);
	
	tot=entero_potencia(base,exp);
	
	printf("El resultado es %.2f\n",tot);
	
	return 0;
}
