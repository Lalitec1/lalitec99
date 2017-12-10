#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float x,y,a,b,res;
	printf("Por favor ingrese los valores de x,y,a y b para realizar la operacion\n");
	scanf("%f %f %f %f", &x,&y,&a,&b);
	res=(x+y)*(x+y)*(a-b);
	printf("Tu resultado es %.2f\n",res);
	system("PAUSE");
	return 0;
}
