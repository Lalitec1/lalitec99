#include <stdio.h>
#include <stdlib.h>
#include<dos.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int seleccion,calabacita,i=0;
	float sensor,humedad;
	printf("El siguiente programa monitorea el estado de los cultivos\n");
C:	printf("Seleccione el numero de lo que desea cultivar:\n1. Tomate\n2. Melon\n3. Pepino\n");
	scanf("%d",&seleccion);
B:	printf("Tambien desea cultivar calabacita?\n");
	printf("Seleccione 1 para si o 0 para no\n");
	scanf("%d",&calabacita);
A:	printf("Por favor ingrese el porcentaje de humedad en el ambiente\n");
	scanf("%f",&sensor);
	humedad=sensor;
	if((seleccion>=1)&&(seleccion<=3)){
	if(calabacita==1){
		switch(seleccion){
			case 1:
				while(humedad<55){
					printf("Humedad baja para el cultivo, comenzando riego automatico\n");
					printf("Regando\n");
					sleep(3);
				    humedad=humedad+(humedad*.04);
				}
				while(humedad>60){
					printf("Humedad alta para el cultivo, abriendo ventanilla\n");
					printf("Ventanilla abierta\n");
					sleep(5);
				    humedad=humedad-(humedad*.03);
				}
				if((humedad>=55)&&(humedad<=60)){
					printf("Humedad optima\n");
					sleep(10);
					goto A;
				}
				break;
			case 2:
				while(humedad<60){
					printf("Humedad baja para el cultivo, comenzando riego automatico\n");
					printf("Regando\n");
					sleep(3);
				    humedad=humedad+(humedad*.04);
				}
				while(humedad>70){
					printf("Humedad alta para el cultivo, abriendo ventanilla\n");
					printf("Ventanilla abierta\n");
					sleep(5);
				    humedad=humedad-(humedad*.03);
				}
				if((humedad>=60)&&(humedad<=70)){
					printf("Humedad optima\n");
					sleep(10);
					goto A;
				}
				break;
			case 3:
				while(humedad<70){
					printf("Humedad baja para el cultivo, comenzando riego automatico\n");
					printf("Regando\n");
					sleep(3);
				    humedad=humedad+(humedad*.04);
				}
				while(humedad>80){
					printf("Humedad alta para el cultivo, abriendo ventanilla\n");
					printf("Ventanilla abierta\n");
					sleep(5);
				    humedad=humedad-(humedad*.03);
				}
				if((humedad>=70)&&(humedad<=80)){
					printf("Humedad optima\n");
					sleep(10);
					goto A;
				}
				break;
		}
	}else if(calabacita==0){
			switch(seleccion){
			case 1:
				while(humedad<50){
					printf("Humedad baja para el cultivo, comenzando riego automatico\n");
					printf("Regando\n");
					sleep(3);
				    humedad=humedad+(humedad*.04);
				}
				while(humedad>60){
					printf("Humedad alta para el cultivo, abriendo ventanilla\n");
					printf("Ventanilla abierta\n");
					sleep(5);
				    humedad=humedad-(humedad*.03);
				}
				if((humedad>=50)&&(humedad<=60)){
					printf("Humedad optima\n");
					sleep(10);
					goto A;
				}
				break;
			case 2:
				while(humedad<60){
					printf("Humedad baja para el cultivo, comenzando riego automatico\n");
					printf("Regando\n");
					sleep(3);
				    humedad=humedad+(humedad*.04);
				}
				while(humedad>70){
					printf("Humedad alta para el cultivo, abriendo ventanilla\n");
					printf("Ventanilla abierta\n");
					sleep(5);
				    humedad=humedad-(humedad*.03);
				}
				if((humedad>=60)&&(humedad<=70)){
					printf("Humedad optima\n");
					sleep(10);
					goto A;
				}
				break;
			case 3:
				while(humedad<70){
					printf("Humedad baja para el cultivo, comenzando riego automatico\n");
					printf("Regando\n");
					sleep(3);
				    humedad=humedad+(humedad*.04);
				}
				while(humedad>90){
					printf("Humedad alta para el cultivo, abriendo ventanilla\n");
					printf("Ventanilla abierta\n");
					sleep(5);
				    humedad=humedad-(humedad*.03);
				}
				if((humedad>=70)&&(humedad<=90)){
					printf("Humedad optima\n");
					sleep(10);
					goto A;
				}
				break;
	        }
    }else{
    	printf("No has elegido correctamente si vas a cultivar calabacita o no\n");
    	goto B;
	}
}else{
	printf("Seleccione un cultivo de los disponibles unicamente\n");
	goto C;
}
	return 0;
}
