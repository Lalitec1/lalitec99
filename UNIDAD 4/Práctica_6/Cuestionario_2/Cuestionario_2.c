#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumar(int* a,int* b);

int main(int argc, char *argv[]) {
	int*num1=(int*)malloc(sizeof(int));
    int*num2=(int*)malloc(sizeof(int));
    *num1=5;
    *num2=8;
    int total=sumar(num1,num2);
    printf("%d\n",num1);
    printf("%d\n",total);
	return 0;
}

int sumar(int* a, int* b){
    int c=0;
    *a=4;
    printf("%d\n",a);
    c=(*a)+(*b);
    return c;
}
