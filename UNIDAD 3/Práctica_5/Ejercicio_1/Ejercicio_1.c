#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Declaración de variables
	char frase1[120];

	//Fin de declaración de variables
	//Escaneo de la cadena
	fgets(frase1,120,stdin);
	//Fin de escaneo
	//Comienza separación
	char *token=strtok(frase1,"");
	
	while(token != NULL){
		printf("El token es: %s\n", token);
		token=strtok(NULL,"");
	}
	
	return 0;
}
