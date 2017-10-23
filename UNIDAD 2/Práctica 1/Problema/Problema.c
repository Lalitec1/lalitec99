#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float volumen,diametro,altura,area,presion,presion1;
	char liquido;
	const float pi=3.14159,grav=9.81,densa=1000,densd=820;
	printf("Hola, este programa sirve para calcular en volumen de liquido en un contenedor\n");
	printf("Lo unico que debera ingresar es tipo de liquido del que se trata, el valor de la presion mostrado en el sensor y el diametro del contenedor\n");
	printf("Por favor coloque una 'd' en caso de que el liquido sea diesel o una 'a' en caso de que el liquido sea agua :D\n");
	scanf("%c",&liquido);
	printf("Por favor ingrese el valor del diametro del contenedor en metros\n");
	scanf("%f",&diametro);
	printf("Por favor ingrese el valor de la presion que marca el sensor del contenedor en bar\n");
	scanf("%f",&presion);
	area=(pi*diametro*diametro)/4;
	presion1=presion*100;
	(liquido=='a')?(altura=(presion1)/(densa*grav)):((liquido=='d')?(altura=(presion1)/(densd*grav)):printf("Por favor ingrese un liquido valido\n"));
	volumen=altura*area;
	printf("Tu volumen es de %.2f metros cubicos\n",volumen);
	system("PAUSE");
	return 0;
}
