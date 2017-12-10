#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,fx;
	for(x=0;x<=10;x=x+0.5){
		fx=(sin(2*x))-x;
		printf("El resultado del seno de %.2f es %.3f\n",x,fx);
	}
	return 0;
}
