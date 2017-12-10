#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int segundos_totales,horas,minutos,segundos,tmp;
	printf("Por favor introduzca el valor en segundos para realizar la conversion\n");
	scanf("%d",&segundos_totales);
	((segundos_totales/60)<60)?((minutos=segundos_totales/60)&(segundos=segundos_totales%60)&(horas=0)):(horas=(segundos_totales/60)/60);
	(segundos_totales<60)?(segundos=segundos_totales):((minutos=(segundos_totales/60)%60)&(segundos=segundos_totales%60));
    printf("%i %i %i\n",horas,minutos,segundos);
	system("PAUSE");
	return 0;
}
