#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int laberinto[5][6]={1,0,1,1,0,5,1,0,1,1,0,1,1,0,1,1,0,1,1,0,0,0,0,1,1,1,0,1,1,1};
	int posicion,i=0,j=1,f,c;
	char direccion;
	
	printf("El objetivo es llegar a la casilla marcada con el numero 5 por el camino de números 0\n");
	fflush(stdin);
	printf("Por favor ingrese A para moverse hacia arriba, B para moverse hacia abajo, D para moverse a la derecha o I para moverse a la izquierda\n");
	fflush(stdin);
	laberinto[0][1]=8;
	for(f=0;f<=4;f++){
			for(c=0;c<=5;c++){
				printf("%d  ",laberinto[f][c]);
			}
			printf("\n");
		}
		fflush(stdin);
	while(laberinto[0][5]!=8){
		fflush(stdin); 
		scanf("%c",&direccion);
		fflush(stdin);
		switch(direccion){
			case 'a':
				if(i==0){
					printf("Movimiento invalido\n");
				}else if(laberinto[i-1][j]!=1){
					laberinto[i][j]=0;
					laberinto[i-1][j]=8;
					i--;
				}else{
					printf("Movimiento invalido\n");
				}
			break;
			case 'A':
				if(i==0){
					printf("Movimiento invalido\n");
				}else if(laberinto[i-1][j]!=1){
					laberinto[i][j]=0;
					laberinto[i-1][j]=8;
					i--;
				}else{
					printf("Movimiento invalido\n");
				}
			break;
			case 'b':
				if(i==4){
					printf("Movimiento invalido\n");
				}else if(laberinto[i+1][j]!=1){
					laberinto[i][j]=0;
					laberinto[i+1][j]=8;
					i++;
				}else{
					printf("Movimiento invalido\n");
				}
			break;
			case 'B':
				if(i==4){
					printf("Movimiento invalido\n");
				}else if(laberinto[i+1][j]!=1){
					laberinto[i][j]=0;
					laberinto[i+1][j]=8;
					i++;
				}else{
					printf("Movimiento invalido\n");
				}
			break;
			case 'd':
				if(j==5){
					printf("Movimiento invalido\n");
				}else if(laberinto[i][j+1]!=1){
					laberinto[i][j]=0;
					laberinto[i][j+1]=8;
					j++;
				}else{
					printf("Movimiento invalido\n");
				}
			break;
			case 'D':
				if(j==5){
					printf("Movimiento invalido\n");
				}else if(laberinto[i][j+1]!=1){
					laberinto[i][j]=0;
					laberinto[i][j+1]=8;
					j++;
				}else{
					printf("Movimiento invalido\n");
				}
			break;
			case 'i':
				if(j==0){
					printf("Movimiento invalido\n");
				}else if(laberinto[i][j-1]!=1){
					laberinto[i][j]=0;
					laberinto[i][j-1]=8;
					j--;
				}else{
					printf("Movimiento invalido\n");
				}
			break;
			case 'I':
				if(j==0){
					printf("Movimiento invalido\n");
				}else if(laberinto[i][j-1]!=1){
					laberinto[i][j]=0;
					laberinto[i][j-1]=8;
					j--;
				}else{
					printf("Movimiento invalido\n");
				}
			break;
		}
		for(f=0;f<=4;f++){
			for(c=0;c<=5;c++){
				printf("%d  ",laberinto[f][c]);
			}
			printf("\n");
		}
	}
	printf("\n")
	printf("Felicidades lo has logrado!!\n");
	
	return 0;
}
