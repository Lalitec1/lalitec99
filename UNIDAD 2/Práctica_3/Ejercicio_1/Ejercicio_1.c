#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arreglo1[10]={0,0,0,0,0,0,0,0,0,0},arreglo2[100],i;
	srand (time(NULL));
	printf("Calculo de numeros aleatorios y procesamiento de cuantas veces aparece\n");
	for(i=0;i<=99;i++){
		arreglo2[i]=rand()%10 +1;
		printf("%d\n",arreglo2[i]);
		switch(arreglo2[i]){
			case 1:arreglo1[0]++; break;
			case 2:arreglo1[1]++; break;
			case 3:arreglo1[2]++; break;
			case 4:arreglo1[3]++; break;
			case 5:arreglo1[4]++; break;
			case 6:arreglo1[5]++; break;
			case 7:arreglo1[6]++; break;
			case 8:arreglo1[7]++; break;
			case 9:arreglo1[8]++; break;
			case 10:arreglo1[9]++; break;
		}
	}
	printf("\n");
	for(i=0;i<=9;i++){
		printf("%d: %d\n",i+1,arreglo1[i]);
	}
	return 0;
}
