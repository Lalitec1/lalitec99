#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float C=0,S=0,i,media;
  printf("Por favor ingrese los numeros positivos para calcular la media, para terminar el calculo ingrese 0\n");
A:scanf("%f",&i);
  while(i>0){
              S=S+i;
              C++;
              scanf("%f",&i);
              }
  if(i<0){
          printf("Unicamente ingrese valores positivos por favor\n");	
          goto A;
          }
  if(i==0&&C==0){
          printf("Ingrese los datos por favor\n");	
          system("PAUSE");	
          return 0;
          }
  media=S/C;
  printf("Tu media es %f\n",media);
  system("PAUSE");	
  return 0;
}
