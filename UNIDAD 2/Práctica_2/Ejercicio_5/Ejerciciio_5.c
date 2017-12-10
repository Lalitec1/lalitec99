#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1,num2,total,i;
	char operador,salir;
A:	printf("Por favor ingrese la operacion a realizar\n");
	scanf("%f %c %f",&num1,&operador,&num2);
	switch(operador){
	case '+':total=num1+num2; break;
	case '-':total=num1-num2; break;
	case '*':total=num1*num2; break;
	case '/':total=num1/num2; break;
	}
	printf("Tu resultado es %.3f\n",total);
	printf("Si desea salir presione '1s'\n");
	scanf("%d %c",&i,&salir);
	if((salir=='s')||(salir=='S')){
		return 0;
	}else{
		goto A;
	}
	return 0;
}
