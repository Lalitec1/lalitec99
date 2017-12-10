#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float M[3][3]={},detM,Mt[3][3],Ma[3][3],Mi[3][3];
	int i,j;
	
	printf("Bienvenido a la calculadora de matrices inversas, por favor ingrese la matriz a la que le quiere sacar inversa que sea de orden 3x3\n");
	
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			scanf("%f",&M[i][j]);
		}
		printf("\n");
	}
	
	detM=(M[0][0]*M[1][1]*M[2][2])+(M[1][0]*M[2][1]*M[0][2])+(M[2][0]*M[0][1]*M[1][2])-(M[2][0]*M[1][1]*M[0][2])-(M[1][0]*M[0][1]*M[2][2])-(M[0][0]*M[2][1]*M[1][2]);
    
    if(detM ==0){
    	printf("Lo sentimos pero su matriz no es invertible\n");
	}else{
		
		for(i=0;i<=2;i++){
            for(j=0;j<=2;j++){
            Mt[i][j]=M[j][i];
            }
        }
        
        Ma[0][0]=(pow((-1),2))*(Mt[1][1]*Mt[2][2]-Mt[1][2]*Mt[2][1]);
        Ma[0][1]=(pow((-1),3))*(Mt[1][0]*Mt[2][2]-Mt[1][2]*Mt[2][0]);
        Ma[0][2]=(pow((-1),4))*(Mt[1][0]*Mt[2][1]-Mt[1][1]*Mt[2][0]);
        Ma[1][0]=(pow((-1),3))*(Mt[0][1]*Mt[2][2]-Mt[0][2]*Mt[2][1]);
        Ma[1][1]=(pow((-1),4))*(Mt[0][0]*Mt[2][2]-Mt[0][2]*Mt[2][0]);
        Ma[1][2]=(pow((-1),5))*(Mt[0][0]*Mt[2][1]-Mt[0][1]*Mt[2][0]);
        Ma[2][0]=(pow((-1),4))*(Mt[0][1]*Mt[1][2]-Mt[0][2]*Mt[1][1]);
        Ma[2][1]=(pow((-1),5))*(Mt[0][0]*Mt[1][2]-Mt[0][2]*Mt[1][0]);
        Ma[2][2]=(pow((-1),6))*(Mt[0][0]*Mt[1][1]-Mt[0][1]*Mt[1][0]);
        
        for(i=0;i<=2;i++){
            for(j=0;j<=2;j++){
            Mi[i][j]=Ma[i][j]/detM;
            }
        }
        
        for(i=0;i<=2;i++){
            for(j=0;j<=2;j++){
            printf("%.2f\t",Mi[i][j]);
            }
            printf("\n");
        }
        
	}
	
	system("PAUSE");
	return 0;
}
