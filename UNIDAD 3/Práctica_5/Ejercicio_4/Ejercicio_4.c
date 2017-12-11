#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char linea[600];
	char *dia;
	char *mes;
	char *ano;
	char *token;
	int an,an1,ms;
	printf("Por favor introduzca la fecha en formato dd/mm/aa\n");
	scanf("%s",linea);
	dia= strtok(linea , "/" );
    mes= strtok(NULL , "/" );
    ano= strtok(NULL , "/" );
    
    ms=atoi(mes);
    an=atoi(ano);
    
    if(an>=50 && an<= 99){
    	an1=1900+an;
	}else{
		an1=2000+an;
	}
    
    switch(ms){
    	case 1:
    		printf("%s de Enero de %d\n",dia,an1);
    		break;
    	case 2:
    		printf("%s de Febrero de %d\n",dia,an1);
    		break;
    	case 3:
    		printf("%s de Marzo de %d\n",dia,an1);
    		break;
    	case 4:
    		printf("%s de Abril de %d\n",dia,an1);
    		break;
    	case 5:
    		printf("%s de Mayo de %d\n",dia,an1);
    		break;
    	case 6:
    		printf("%s de Junio de %d\n",dia,an1);
    		break;
    	case 7:
    		printf("%s de Julio de %d\n",dia,an1);
    		break;
    	case 8:
    		printf("%s de Agosto de %d\n",dia,an1);
    		break;
    	case 9:
    		printf("%s de Septiembre de %d\n",dia,an1);
    		break;
    	case 10:
    		printf("%s de Octubre de %d\n",dia,an1);
    		break;
    	case 11:
    		printf("%s de Noviembre de %d\n",dia,an1);
    		break;
    	case 12:
    		printf("%s de Diciembre de %d\n",dia,an1);
    		break;
	}
    
	return 0;
}
