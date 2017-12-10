#include <stdio.h>
#include <stdlib.h>
#define GRAV 9.81
#define ESC 27

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int comprobacion(int num){
	int res;
	
	if(num!=0&&num!=1&&num!=2&&num!=3&&num!=4){
	    res=0;	
	}else{
		res=1;
	}
	
	return res;
}

float area(){
}

float volumen(){
}

float fuerza(){
}

int main(int argc, char *argv[]) {
	float tecla=0,diam[4],area[4],fuerza[4],masa[4],peso[4];
	int cil[4]={0,0,0,0},com[4],i=0;
	
	printf("Por favor ingrese el numero de los cilindros que desea ocupar y presione ESC para terminar la seleccion\n1. Primero\n2. Segundo\n3. Tercero\n4. Cuarto\n");
	
	
	while(tecla!=ESC){
		if(i<=3){
		scanf("%d",&cil[i]);
		tecla=getch();
		i++;
	    }else{
		break;
		}
    }
    
    for(i=0;i<=3;i++){
    	com[i]=comprobacion(cil[i]);
    	if(com[i]==0){
    		printf("Valor invalido en la seleccion %d\n",i+1);
		}
	}
	
	
	
	return 0;
}
