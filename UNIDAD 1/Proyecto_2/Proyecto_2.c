#include <stdio.h>
#include <stdlib.h>
#define SWAP_AND_CAT(intByteH,intByteL)(intByteH)|(((intByteL)<<8)&0x0000ff00)
#define SWAP_AND_CAT_WORDS(intWordH,intWordL)(0xffff0000&((intWordL)<<16))|(intWordH)

int funciondenteros(int intBH){ /*prototipo de funcion*/
	int intByteL=0x000000ff&intBH;            //A1
	int intByteH=0x000000ff&(intBH>>8);       //A2
    //int tmp=intByteL;                         //A3
	//intByteL=intByteH;                         //A4
	return SWAP_AND_CAT(intByteH,intByteL);           //A5
}
int main(int argc, char *argv[]) {
	int intA,intBH,intBL,intByteH,intByteL,intWordL,intWordH,tmp,i;
	printf("Para un int se usan %i bytes\n",sizeof(intA));
	printf("Para un int se usan %i bytes\n",sizeof(int));
	printf("%c\t%i\n\n",0x48,0x48);/* imprime la letra H */
	union {
		int saludo;
		char c[4];
	} ache,*p;
	intA=0x4f4c4100;
	printf("intA=%x\n",intA);
	p=&ache;
	int funcion_para_saludo(int);
	p->saludo=tmp=funcion_para_saludo(intA);
    printf("p->saludo=0x%x\n",p->saludo);
	printf("H%s\n",p->c);

    for(i=31;i>=0;i--){
                       printf("%d",(tmp>>i)&0x1);
                       }
	printf("\n");
	printf("Para el int p->saludo se usan %i bytes\n",sizeof(p->saludo));
	printf("Para el arreglo  p->c se usan %i bytes\n",sizeof(p->c));
	printf("Pointer a p->saludo:%p\n",&p->saludo);
	printf("Pointer a p->c[0]:%p\n",&p->c[0]);
	printf("Pointer a p->c[1]:%p\n",&p->c[1]);
	printf("Pointer a p->c[2]:%p\n",&p->c[2]);
	printf("Pointer a p->c[3]:%p\n",&p->c[3]);
	system ("PAUSE");
	return 0;
}/*end main()*/
	int funcion_para_saludo(intA){
    int intBL=0x0000ffff&intA;
	int intBH=0x0000ffff&(intA>>16);
	int intWordH=funciondenteros(intBH);
    int intWordL=funciondenteros(intBL);
    return SWAP_AND_CAT_WORDS(intWordH,intWordL);
        }
