#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float voltaje(float res, float corr){
	float volt;
	volt=res*corr;
	return volt;
}

float resistencia(float volt, float corr){
	float res;
	res=volt/corr;
	return res;
}

float corriente(float volt, float res){
	float corr;
	corr=volt/res;
	return corr;
}

int main(int argc, char *argv[]) {
	int opcion;
	float volt,res,corr;
	
	printf("Por favor seleccione el numero de lo que desea calcular:\n1.Voltaje\n2.Corriente\n3.Resistencia\n");
	scanf("%d",&opcion);
	switch(opcion){
		case 1:
			printf("Por favor introduzca la resistencia en ohms\n");
			scanf("%f",&res);
			printf("Por favor introduzca la corriente en amperes\n");
			scanf("%f",&corr);
			volt=voltaje(res,corr);
			printf("El voltaje es de %.2f volts\n",volt);
			break;
		case 2:
			printf("Por favor introduzca el voltaje en volts\n");
			scanf("%f",&volt);
			printf("Por favor introduzca la corriente en amperes\n");
			scanf("%f",&corr);
			res=resistencia(volt,corr);
			printf("La resistencia es de %.2f ohms\n",res);
			break;
		case 3:
			printf("Por favor introduzca el voltaje en volts\n");
			scanf("%f",&volt);
			printf("Por favor introduzca la resistencia en ohms\n");
			scanf("%f",&res);
			corr=corriente(volt,res);
			printf("La corriente es de %.2f amperes\n",corr);
			break;
	}
	return 0;
}
