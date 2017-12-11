#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Imprime_arr(int arr[]);
int Suma_arr(int arr1[], int arr2 []);
int Invert(int arr[]);
int Par_impar(int arr[]);

int main(int argc, char *argv[]) {
	int arreglo1[5]={1,5,9,7,3};
	int arreglo2[5]={2,8,6,4,5};
	int res,res1;
	 printf("Por favor escoja lo que desea realizar\n");
	 printf("1. Imprimir uno de los arreglos\n2. Arreglo de suma\n3. Arreglo invertido\n4. Arreglo par/impar\n");
	 scanf("%d",&res);
	 switch(res){
	 	case 1:
	 		printf("Seleccione el arreglo que desee imprimir\n1. Arreglo1\n2.Arreglo2\n");
	 		scanf("%d",&res1);
	 		if(res1==1){
	 			Imprime_arr(arreglo1);
			 }else if(res1==2){
			 	Imprime_arr(arreglo2);
			 }else{
			 	printf("Selección erronea\n");
			 }
	 		break;
	 	case 2:
	 		Suma_arr(arreglo1,arreglo2);
	 		break;
	 	case 3:
	 		printf("Seleccione el arreglo que desee Invertir\n1. Arreglo1\n2.Arreglo2\n");
	 		scanf("%d",&res1);
	 		if(res1==1){
	 			Invert(arreglo1);
			 }else if(res1==2){
			 	Invert(arreglo2);
			 }else{
			 	printf("Selección erronea\n");
			 }
	 		break;
	 	case 4:
	 		printf("Seleccione el arreglo que desee saber si es par o impar su contenido\n1. Arreglo1\n2.Arreglo2\n");
	 		scanf("%d",&res1);
	 		if(res1==1){
	 			Par_impar(arreglo1);
			 }else if(res1==2){
			 	Par_impar(arreglo2);
			 }else{
			 	printf("Selección erronea\n");
			 }
	 		break;
	 }
	 
	return 0;
}

int Imprime_arr(int arr[]){
	int i;
	int *arre;
	for(i=0;i<5;i++){
		arre=&arr[i];
		printf("%d  ",*arre);
	}
	return 0;
}

int Suma_arr(int arr1[], int arr2 []){
	int *arr3[5];
	int *arr4[5];
	int arr5[5];
	int i;
	for(i=0;i<5;i++){
		arr3[i]=&arr1[i];
		arr4[i]=&arr2[i];
		arr5[i]=(*arr3[i])+(*arr4[i]);
	}
	for(i=0;i<5;i++){
		printf("%d  ",arr5[i]);
	}
	return 0;
}

int Invert(int arr[]){
	int *arr1;
	int i;
	for(i=4;i>=0;i--){
		arr1=&arr[i];
		printf("%d  ",*arr1);
	}
	return 0;
}

int Par_impar(int arr[]){
	int i;
	for(i=0;i<5;i++){
		if(arr[i]%2==1){
			printf("%c  ",'I');
		}else{
			printf("%c  ",'P');
		}
	}
	return 0;
}
