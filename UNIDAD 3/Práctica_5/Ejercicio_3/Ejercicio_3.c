#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char linea[600];
	int in,a=0,e=0,i=0,o=0,u=0,longi;
	printf("Por favor introduzca la linea a analizar:\n");
	scanf("%s",linea);
	longi=strlen(linea);
	for(in=0;in<longi;in++){
		switch(linea[in]){
			case 'a':
				a++;
				break;
			case 'A':
				a++;
				break;
			case 'e':
				e++;
				break;
			case 'E':
				e++;
				break;
			case 'i':
				i++;
				break;
			case 'I':
				i++;
				break;
			case 'o':
				o++;
				break;
			case 'O':
				o++;
				break;
			case 'u':
				u++;
				break;
			case 'U':
				u++;
				break;
		}
	}
	printf("Los valores de las vocales son:\n");
	printf("a:%d  e:%d  i:%d  o:%d  u:%d",a,e,i,o,u);
	return 0;
}
