#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float pies,pulgadas,yardas,cm,metros;
	printf("Por favor ingrese el valor en pies para realizar la conversion\n");
	scanf("%f",&pies);
	pulgadas=12*pies;
	yardas=pies/3;
	cm=pulgadas*2.54;
	metros=cm/100;
	printf("Tus conversiones son %.2f pies son:\n%.2f pulgadas=%.2f yardas=%.2f centimetros=%.2f metros\n",pies,pulgadas,yardas,cm,metros);
	system("PAUSE");
	return 0;
}
