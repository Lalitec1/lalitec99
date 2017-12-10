#include <stdio.h>

void main(){

int ma[3][3]={0,0,0,0,0,0,0,0,0};
int a, b;

printf("Inttroduce la matriz original 3x3\n");
    for(a=0;a<=2;a++){
      for(b=0;b<=2;b++){
scanf("%d",&ma[a][b]);
      }
      printf("\n");
    }
printf("La inversa de la matriz a es..: \n");

    for(a=0;a<3;a++){
      for(b=0;b<3;b++){
printf("%d\t",ma[b][a]);
      }
printf("\n");
    }
getch();
}
