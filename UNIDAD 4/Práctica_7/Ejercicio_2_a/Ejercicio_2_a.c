#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Fecha{
	int anio;
	int mes;
	int dia;
};

struct Fecha fecha;

typedef struct Disco{
	char titulo[100];
	char artist[100];
	int no_can;
	float precio;
	struct Fecha;
};

struct Disco disco;

void solicitarDatos();

int main(int argc, char *argv[]) {
	
	
	return 0;
}

void solicitarDatos(){
   fecha *fecha1;
   fecha1=(fecha*)malloc(sizeof(fecha));
	printf("Introduzca el anio del disco\n");
	scanf("%d",fecha1.anio);
	printf("Introduzca el mes del disco\n");
	scanf("%d",fecha1.mes);
	printf("Introduzca el dia del disco\n");
	scanf("%d",fecha1.dia);
   disco *disco1;
    printf("Introduzca el titulo del disco\n");
	scanf("%s",disco1.titulo);
	printf("Introduzca el artista del disco\n");
	scanf("%s",disco1.artist);
	printf("Introduzca el numero de canciones del disco\n");
	scanf("%d",disco1.no_can);
	printf("Introduzca el precio del disco\n");
	scanf("%f",disco1.precio);
	return *Disco1;
}
