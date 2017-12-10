#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calcular_serie(int n){
	int tot=0,i=1;
	
    while(i<=n){
    	
    	if((i%2)==1){
    		tot=tot+pow(i,i);
		}else{
			tot=tot-pow(i,i);
		}
		i++;
	}
	return tot;
}

int main(int argc, char *argv[]) {
	int n,tot;
	
	printf("Por favor ingrese el valor de n para calcular la serie\n");
	scanf("%d",&n);
	
	tot=calcular_serie(n);
	
	printf("El resultado de tu serie es %d\n",tot);
	
	return 0;
}
