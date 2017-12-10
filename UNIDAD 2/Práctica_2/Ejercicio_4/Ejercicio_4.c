#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int seleccion,total=0,cantidad,i;
	char decision;
	printf("Seleccione el numero del producto que desea comprar\n");
	printf("1. Hamburguesa chica con papas y refresco $20\n2. Hotdog y refresco $18\n3. Ensalada rusa $15\n");
	scanf("%d",&seleccion);
	printf("Cuantos desea?\n");
	scanf("%d",&cantidad);
	switch(seleccion){
		case 1:total=20*cantidad;break;
		case 2:total=18*cantidad;break;
		case 3:total=15*cantidad;break;
	}
	printf("Desea algo mas?\nColoque '1s' para seguir ordenando o '1n' para finalizar la orden\n");
	scanf("%d %c",&i,&decision);
	while(decision=='s'){
		printf("Que mas desea ordenar?\n");
		scanf("%d",&seleccion);
		printf("Cuantos desea?\n");
	    scanf("%d",&cantidad);
	    switch(seleccion){
		case 1:total=total+(20*cantidad);break;
		case 2:total=total+(18*cantidad);break;
		case 3:total=total+(15*cantidad);break;
	}
		printf("¿Desea algo mas?\nColoque '1s' para seguir ordenando o '1n' para finalizar la orden\n");
	    scanf("%d %c",&i,&decision);
	}
	printf("El total de su orden es %d\n",total);
	return 0;
}
