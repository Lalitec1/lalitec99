#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float kwh,cuota=52.84,prim,sec,ad,total;
	printf("Por favor introduzca la cantidad de Kilowatts/hora consumidos para calcular su costo\n");
	scanf("%f",&kwh);
	if((kwh>1)&&(kwh<=50)){
		prim=kwh*2.288;
		sec=0;
		ad=0;
	}else if((kwh>50)&&(kwh<=100)){
		prim=50*2.288;
		kwh=kwh-50;
		sec=kwh*2.762;
		ad=0;
	}else if(kwh>100){
		prim=50*2.288;
		sec=50*2.762;
		kwh=kwh-100;
		ad=kwh*3.042;		
	}else{
		printf("Por favor ingrese un valor correcto\n");
	}
	total=cuota+prim+sec+ad;
	printf("Usted debe %.2f\n",total);
	return 0;
}
