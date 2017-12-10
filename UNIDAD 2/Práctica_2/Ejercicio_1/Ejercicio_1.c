#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,fx;
	printf("Por favor introduzca el valor de x en el que va a ser evaluada la funcion\n");
	scanf("%f",&x);
	if(x<=0){
		fx=x*(x-1);
	}else{
		fx=x*(-x+3);
	}
	printf("El valor de fx es %.2f",fx);
	return 0;
}
