#include <stdio.h>
#include <stdlib.h>
char partido[9][32]={
  {"PAN"},{"PRI"},{"PRD"},{"VERDE"},{"PT"},{"PANAL"},{"MC"},{"MORENA"},{"ENCUENTRO SOCIAL"}
};

struct coal{
  char coal_name[128];
  int *intPt; //Apunta a los indices de los partidos en el arreglo partido
  int intVotos;
};

struct part{
  int intindex;
  int intVotos;
};

void contar_votos(int intindexPartido,char lineaH[128],char linea[],struct part *partPt);

int main(int argc, char *argv[])
{
  char linea0[128]="PAN,PRI,PRD,VERDE,PT,PANAL, MC,MORENA,ENCUENTRO SOCIAL,NULOS";
  char linea1[128]="500,300,150,   10, 2,  200,  1,   250,             100,  100";
  char linea2[128]="500,300,150,   10, 2,  200,  1,   250,             100,  100";
  struct part part0;
  part0.intVotos=part0.intindex=0;
  contar_votos(0,linea0,linea1,&part0);
  
  system("PAUSE");	
  return 0;
}// end main()

void contar_votos(int intindexPartido,char lineaH[128],char linea[],struct part *partPt){
   int i=0,cantComas=0;
   
   do{
   if(linea[i] ==','){
               cantComas++;
               }
               if(cantComas==intindexPartido){
               break;
               }
               i++;
               ]while(i<128);
}
