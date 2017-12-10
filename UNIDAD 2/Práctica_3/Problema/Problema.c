#include <stdio.h>
#include <stdlib.h>

#define ESC 27
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[100][100]={},i=0,j,t,num[]={},hor,ver;
	unsigned char tecla;
	char letra[]={};
	
	printf("Introduzca cuantos cubiculos hay en la oficina de manera horizontal\n");
	scanf("%d",&hor);
	printf("Introduzca cuantos cubiculos hay en la oficina de manera vertical\n");
	scanf("%d",&ver);
	printf("Por favor introduzca cuales son las oficinas que estan en peligro de incendio y presione ESC para terminar el ingreso de datos\n");
    
	while(tecla!=ESC){
    	fflush(stdin);
    	scanf("%c %d",&letra[i],&num[i]);
		tecla=getch();
		i++;
	}
	
	i--;
	
	for(j=0;j<=i;j++){
		switch(letra[j]){
			case 'A':
				if(num[j]==1){
					printf("Rociadores activos en: A1,A2,B1,B2\n");
					printf("Alarma activa en: A3,B3,C1,C2,C3\n");
				}else if(){
					
				}else{
					t=num[j];
					while(t>=3&&t<=(hor-2)){
					printf("Rociadores activos en: A%d,A%d,A%d,B%d,B%d,B%d\n",t-1,t,t+1,t-1,t,t+1);
					printf("Alarma activa en: A%d,A%d,B%d,B%d,C%d,C%d,C%d,C%d,C%d\n",t-2,t+2,t-2,t+2,t-2,t-1,t,t+1,t+2);
					}
				}
				break;
			case 'a':
				break;
			case 'B':
				break;
			case 'b':
				break;
			case 'C':
				break;
			case 'c':
				break;
			case 'D':
				break;
			case 'd':
				break;
			case 'E':
				break;
			case 'e':
				break;
			case 'F':
				break;
			case 'f':
				break;
			case 'G':
				break;
			case 'g':
				break;
			case 'H':
				break;
			case 'h':
				break;
			case 'I':
				break;
			case 'i':
				break;
			case 'J':
				break;
			case 'j':
				break;
			case 'K':
				break;
			case 'k':
				break;
			case 'L':
				break;
			case 'l':
				break;
			case 'M':
				break;
			case 'm':
				break;
			case 'N':
				break;
			case 'n':
				break;
			case 'O':
				break;
			case 'o':
				break;
			case 'P':
				break;
			case 'p':
				break;
			case 'Q':
				break;
			case 'q':
				break;
			case 'R':
				break;
			case 'r':
				break;
			case 'S':
				break;
			case 's':
				break;
			case 'T':
				break;
			case 't':
				break;
			case 'U':
				break;
			case 'u':
				break;
			case 'V':
				break;
			case 'v':
				break;
			case 'W':
				break;
			case 'w':
				break;
			case 'X':
				break;
			case 'x':
				break;
			case 'Y':
				break;
			case 'y':
				break;
			case 'Z':
				break;
			case 'z':
				break;
		}
	}
	
	return 0;
}
