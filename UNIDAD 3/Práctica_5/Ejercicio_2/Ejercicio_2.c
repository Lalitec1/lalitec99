#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char linea1[600];
	char linea2[600];
	int longit;
	int i;
	printf("Por favor introduzca la linea a voltear\n");
	scanf("%s",&linea1);
	longit=strlen(linea1);
	for(i=0;i<longit;i++){
		linea2[i]=linea1[longit-1-i];
	}
	printf("El resultado es:\n");
	printf("%s",linea2);
	
	return 0;
}
