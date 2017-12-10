#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cal[]={7,8,9,8,4,5,1,8,4,10,9,8,7,10,6,7};
int aprov[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int reprob[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int igual[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

int main(int argc, char *argv[]) {

  //Declaración de variables
int tmp,i,p;
float promedio;
  //Fin de declaración de variables
  //Asignación de valores
  i=0;
  promedio=0;
  //Fin de asignación
//Calculo de promedio
while(i<=15){
 promedio=promedio+cal[i];
i++;
}
promedio=promedio/16;
printf("Tu promedio es %f\n",promedio);
//Fin de calculo de promedio
//Comparación de valores con respecto al promedio
for(p=0;p<=15;p++){
	if(cal[p]<promedio){
		reprob[p]=cal[p];
	}else if(cal[p]>promedio){
		aprov[p]=cal[p];
	}else{
		igual[p]=cal[p];
	}
}
//Fin de comparación
//Acomodo de los valores
for(p=14;p>=0;p--){
  for(i=0;i<=p;i++){
     if(aprov[i]>aprov[i+1]){
     tmp=aprov[i];
     aprov[i]=aprov[i+1];
     aprov[i+1]=tmp;
     }
    }
}
for(p=14;p>=0;p--){
  for(i=0;i<=p;i++){
     if(reprob[i]>reprob[i+1]){
     tmp=reprob[i];
     reprob[i]=reprob[i+1];
     reprob[i+1]=tmp;
     }
    }
}
for(p=14;p>=0;p--){
  for(i=0;i<=p;i++){
     if(igual[i]>igual[i+1]){
     tmp=igual[i];
     igual[i]=igual[i+1];
     igual[i+1]=tmp;
     }
    }
}
//Fin de acomodo de valores
//Impresión de grupos
//Impresión de los menores
printf("Los valores por debajo del promedio son:\n");
  for(i=0;i<=15;i++){
  	while(reprob[i]==0){
  	i++;
	}
	if(reprob[0]==0&&reprob[1]==0
  &&reprob[2]==0&&reprob[3]==0
  &&reprob[4]==0&&reprob[5]==0
  &&reprob[6]==0&&reprob[7]==0
  &&reprob[8]==0&&reprob[9]==0
  &&reprob[10]==0&&reprob[11]==0
  &&reprob[12]==0&&reprob[13]==0
  &&reprob[14]==0&&reprob[15]==0){
  	printf("No existen valores menores al promedio");
  }else{
  printf("%d ",reprob[i]);}
  }
  printf("\n");
//Fin de los valores menores
//Valores mayores
printf("Los valores por arriba del promedio son:\n");
  for(i=0;i<=15;i++){
  	while(aprov[i]==0){
  	i++;
	}
  if(aprov[0]==0&&aprov[1]==0
  &&aprov[2]==0&&aprov[3]==0
  &&aprov[4]==0&&aprov[5]==0
  &&aprov[6]==0&&aprov[7]==0
  &&aprov[8]==0&&aprov[9]==0
  &&aprov[10]==0&&aprov[11]==0
  &&aprov[12]==0&&aprov[13]==0
  &&aprov[14]==0&&aprov[15]==0){
  	printf("No existen valores mayores al promedio");
  }else{
  printf("%d ",aprov[i]);
  }
}
  printf("\n");
//Fin valores mayores
//Valores iguales
printf("Los valores iguales al promedio son:\n");
  for(i=0;i<=15;i++){
  while(igual[i]==0){
  i++;
  }
  if(igual[0]==0&&igual[1]==0
  &&igual[2]==0&&igual[3]==0
  &&igual[4]==0&&igual[5]==0
  &&igual[6]==0&&igual[7]==0
  &&igual[8]==0&&igual[9]==0
  &&igual[10]==0&&igual[11]==0
  &&igual[12]==0&&igual[13]==0
  &&igual[14]==0&&igual[15]==0){
  	printf("No existen valores iguales al promedio");
  }else{
  	  printf("%d ",igual[i]);
}
  printf("\n");
  }
//Fin de valores iguales

	system("PAUSE");
    return 0;
}
