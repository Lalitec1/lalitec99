#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("color 47");
	int arreglo1[10],i,j;
	printf("Ingrese los 10 valores por favor\n");
	for(i=0;i<=9;i++){
		scanf("%d",&arreglo1[i]);
	}
	printf("\n");
	for(i=0;i<=8;i++){
		for(j=i+1;j<=9;j++){
			if(arreglo1[i]==arreglo1[j]){
				arreglo1[j]=0;
			}
		}
	}
	for(i=0;i<=9;i++){
		printf("%d\t",arreglo1[i]);
	}
	system("PAUSE");
	return 0;
}
