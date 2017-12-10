#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int col,ncol,nfil,n,i,j,k;
	char fil;
	
	printf("Cuantas filas tiene su oficina?\n");
	scanf("%d",&nfil);
	printf("Cuantas columnas tiene su oficina?\n");
	scanf("%d",&ncol);
	
	char Ofi[nfil][ncol];
	char fili[nfil];
	int  coli[ncol];
	
	printf("      ");
	for(j=1;j<=ncol;j++)
	{
	printf(" %d   ",j);
	}
	printf("\n");
	
	for(i=0;i<nfil;i++){
		for(j=-1;j<ncol;j++)
		{
			if (j==-1){
			printf("  %c  ",i+65);
		}else{
				Ofi[i][j]='O';
				printf("  %c  ",Ofi[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("Cuantas oficinas estan incendiandose?\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	printf("Introduzca la letra de la fila y el numero de la columna del cubiculo que se esta quemando\n");
	fflush(stdin);
	scanf("%c %d",&fili[i],&coli[i]);
	}
	
	for(i=0;i<n;i++){
	Ofi[fili[i]-65][coli[i]-1]='I';
	
	for(j=-1;j<=1;j++){
		for(k=-1;k<=1;k++){
			if(Ofi[fili[i]-65+j][coli[i]-1+k]!='I'){
				Ofi[fili[i]-65+j][coli[i]-1+k]='R';
			}
		}
	}
	for(j=-2;j<=2;j++){
		for(k=-2;k<=2;k++){
			if(Ofi[fili[i]-65+j][coli[i]-1+k]!='I' && Ofi[fili[i]-65+j][coli[i]-1+k]!='R'){
				Ofi[fili[i]-65+j][coli[i]-1+k]='A';
			}
		}
	}
	}
    
    printf("Los cubiculos con la letra 'I' se estanincendiando\nLos cubiculos con la letra 'R' tienen activados los rociadores\nLos cubiculos con la letra 'A' tienen la alerta activada\n");
    
    printf("      ");
	for(j=1;j<=ncol;j++)
	{
	printf(" %d   ",j);
	}
	printf("\n");
	
	for(i=0;i<nfil;i++){
		for(j=-1;j<ncol;j++)
		{
			if (j==-1){
			printf("  %c  ",i+65);
		}else{
				printf("  %c  ",Ofi[i][j]);
			}
		}
		printf("\n");
	}
    
	return 0;
}
