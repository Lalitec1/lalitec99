#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lluvias[10][12]={90,90,40,60,20,80,10,10,30,70,50,25,100,80,50,10,60,40,100,40,80,70,100,56,
70,90,60,20,80,50,20,60,30,70,110,60,
50,60,50,30,20,80,50,40,20,70,200,70,
90,90,60,40,80,70,60,40,30,50,10,40,
40,10,50,40,30,90,30,80,80,60,90,86,
100,40,20,50,10,100,90,80,100,70,130,120,
70,10,90,70,50,30,70,60,20,50,40,89,
40,30,40,70,10,100,20,20,70,20,90,66,
10,60,100,50,60,40,50,100,90,20,15,30};
    int tmp,i,p,Son,Agu,Oax,Col,Chi,San,Dur,Ver,Yuc,Tab,En,Feb,Mar,Abr,May,Jun,Jul,Ago,Sep,Oct,Nov,Dic;
    int estados[10]={0,0,0,0,0,0,0,0,0,0};
    int meses[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    for(p=0;p<=9;p++){
    	for(i=0;i<=11;i++){
    estados[p]=estados[p]+lluvias[p][i];
	}
}
    Son=estados[0];
    Agu=estados[1];
    Oax=estados[2];
    Col=estados[3];
    Chi=estados[4];
    San=estados[5];
    Dur=estados[6];
    Ver=estados[7];
    Yuc=estados[8];
    Tab=estados[9];
    
    for(p=8;p>=0;p--){
    for(i=0;i<=p;i++){
        if(estados[i]>estados[i+1]){
        tmp=estados[i];
        estados[i]=estados[i+1];
        estados[i+1]=tmp;
        }
    }
}   

    for(i=0;i<=11;i++){
    meses[i]=lluvias[1][i];
	}

    En=meses[0];
    Feb=meses[1];
    Mar=meses[2];
    Abr=meses[3];
    May=meses[4];
    Jun=meses[5];
    Jul=meses[6];
    Ago=meses[7];
    Sep=meses[8];
    Oct=meses[9];
    Nov=meses[10];
    Dic=meses[11];
    
    for(p=10;p>=0;p--){
    for(i=0;i<=p;i++){
        if(meses[i]>meses[i+1]){
        tmp=meses[i];
        meses[i]=meses[i+1];
        meses[i+1]=tmp;
        }
    }
}
    
        printf("a) El estado que tuvo el mayor registro de precipitacion pluvial durante el ultimo anio fue\n");
    if(estados[9]==Son){
    	printf("Sonora\n");
	}
	if(estados[9]==Agu){
    	printf("Aguascalientes\n");
	}
	if(estados[9]==Oax){
    	printf("Oaxaca\n");
	}
	if(estados[9]==Col){
    	printf("Colima\n");
	}
	if(estados[9]==Chi){
    	printf("Chihuahua\n");
	}
	if(estados[9]==San){
    	printf("San Luis Potosi\n");
	}
	if(estados[9]==Dur){
    	printf("Durango\n");
	}
	if(estados[9]==Ver){
    	printf("Veracruz\n");
	}
	if(estados[9]==Yuc){
    	printf("Yucatan\n");
	}
	if(estados[9]==Tab){
    	printf("Tabasco\n");
	}
	
        printf("b) El estado que tuvo el menor registro de precipitacion pluvial durante el ultimo anio fue\n");
	if(estados[0]==Son){
    	printf("Sonora\n");
	}
	if(estados[0]==Agu){
    	printf("Aguascalientes\n");
	}
	if(estados[0]==Oax){
    	printf("Oaxaca\n");
	}
	if(estados[0]==Col){
    	printf("Colima\n");
	}
	if(estados[0]==Chi){
    	printf("Chihuahua\n");
	}
	if(estados[0]==San){
    	printf("San Luis Potosi\n");
	}
	if(estados[0]==Dur){
    	printf("Durango\n");
	}
	if(estados[0]==Ver){
    	printf("Veracruz\n");
	}
	if(estados[0]==Yuc){
    	printf("Yucatan\n");
	}
	if(estados[0]==Tab){
    	printf("Tabasco\n");
	}
	   
		printf("c) El mes que tuvo mayor registro de lluvias del estado de Aguascalientes del ultimo anio fue\n");    
	if(meses[11]==En){
		printf("Enero\n");
	}
	if(meses[11]==Feb){
		printf("Febrero\n");
	}
	if(meses[11]==Mar){
		printf("Marzo\n");
	}
	if(meses[11]==Abr){
		printf("Abril\n");
	}
	if(meses[11]==May){
		printf("Mayo\n");
	}
	if(meses[11]==Jun){
		printf("Junio\n");
	}
	if(meses[11]==Jul){
		printf("Julio\n");
	}
	if(meses[11]==Ago){
		printf("Agosto\n");
	}
	if(meses[11]==Sep){
		printf("Septiembre\n");
	}
	if(meses[11]==Oct){
		printf("Octubre\n");
	}
	if(meses[11]==Nov){
		printf("Noviembre\n");
	}
	if(meses[11]==Dic){
		printf("Diciembre\n");
	}
	
	return 0;
}
