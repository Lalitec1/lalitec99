#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){ 
    int intA,intBH,intBL,intByteH,intByteL,tmp,intWordL,intWordH;
    printf("Para un int se usan %i bytes\n",sizeof(intA));
    printf("Para un int se usan %i bytes\n",sizeof(int));
    printf("%c\t%i\n\n",0x48,0x48);/*imprime la letra H*/
    
    union{
        int saludo;
        char c[4];
             } ache,*p;
             /*
             H 0x48, O 0x0x4f, L 0x4c, A 0x41, \0 0x00
             0x4f4c4100--->0x41004f4c--->0x00414c4f
             saludo=0x00414c4d
             */
             intA=0x4f4c4100;
             printf("intA=%x\n",intA);
             intBL=0x0000ffff&intA;
             intBH=0x0000ffff&(intA>>16);
             printf("intBH=%0x\tintBL=%0x\n",intBH,intBL);
             intByteL=0x000000ff&intBH;
             intByteH=0x000000ff&(intBH>>8);
             printf("intByteH=%0x\tintByteL=%0x\n",intByteH,intByteL);
             tmp=intByteL;
             intByteL=intByteH;
             intWordL=intByteL|(tmp<<8);
             printf("intWordL=0x%x\n",intWordL);
             intByteL=0x000000ff&intBL;
             intByteH=0x000000ff&(intBL>>8);
             printf("intByteH=%0x\tintByteL=%0x\n",intByteH,intByteL);
             tmp=intByteL;
             intByteL=intByteH;
             intWordH=intByteL|(tmp<<8);
             printf("intWordL=0x%x\n",intWordH);
             p=&ache;
             /*p->saludo=0x00414c4f*/
             p->saludo=tmp=(0xffff0000&(intWordH<<16))|intWordL;
             printf("p->saludo=0x%x\n",p->saludo);
             printf("H%s\n",p->c);
             printf("%i",(tmp>>31)&0x1);
             printf("%i",(tmp>>30)&0x1);
             printf("%i",(tmp>>29)&0x1);
             printf("%i",(tmp>>28)&0x1);
             printf("%i",(tmp>>27)&0x1);
             printf("%i",(tmp>>26)&0x1);
             printf("%i",(tmp>>25)&0x1);
             printf("%i",(tmp>>24)&0x1);
             printf("%i",(tmp>>23)&0x1);
             printf("%i",(tmp>>22)&0x1);
             printf("%i",(tmp>>21)&0x1);
             printf("%i",(tmp>>20)&0x1);
             printf("%i",(tmp>>19)&0x1);
             printf("%i",(tmp>>18)&0x1);
             printf("%i",(tmp>>17)&0x1);
             printf("%i",(tmp>>16)&0x1);
             printf("%i",(tmp>>15)&0x1);
             printf("%i",(tmp>>14)&0x1);
             printf("%i",(tmp>>13)&0x1);
             printf("%i",(tmp>>12)&0x1);
             printf("%i",(tmp>>11)&0x1);
             printf("%i",(tmp>>10)&0x1);
             printf("%i",(tmp>>9)&0x1);
             printf("%i",(tmp>>8)&0x1);
             printf("%i",(tmp>>7)&0x1);
             printf("%i",(tmp>>6)&0x1);
             printf("%i",(tmp>>5)&0x1);
             printf("%i",(tmp>>4)&0x1);
             printf("%i",(tmp>>3)&0x1);
             printf("%i",(tmp>>2)&0x1);
             printf("%i",(tmp>>1)&0x1);
             printf("%i\n",(tmp>>0)&0x1);
             printf("Para un int p->saludo se usan %i bytes\n",sizeof(p->saludo));
             printf("Para el arreglo p->c se usan %i bytes\n",sizeof(p->c));
             printf("Pointer a p->saludo:%p\n",&p->saludo);
             printf("Pointer a p->c[0]:%p\n",&p->c[0]);
             printf("Pointer a p->c[0]:%p\n",&p->c[1]);
             printf("Pointer a p->c[0]:%p\n",&p->c[2]);
             printf("Pointer a p->c[0]:%p\n",&p->c[3]);



system("PAUSE");
return 0;
}/*end main()*/
