#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float radio,altura,lado,area,volumen,tmp;
	const float pi=3.14159;
	printf("Por favor ingresa los valores del radio y de la altura en la misma unidad\n");
	scanf("%f %f",&radio,&altura);
	tmp=(radio*radio)+(altura*altura);
	lado=sqrt(tmp);
	volumen=(pi*radio*radio*altura)/3;
	area=2*pi*radio*(lado/2)+pi*radio*radio;
	printf("Tu area es: %.2f y tu volumen es: %.2f\n",area,volumen);
	system("PAUSE");
	return 0;
}
