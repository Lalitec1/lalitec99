/**main.c Presente en pantalla de 10 en 10 los bytes de 
   un arreglo que contiene un programa ejecutable para el procesador
   ARC (A Risc Computer)
*/
#include <stdio.h>
#include <stdlib.h>

unsigned char Byte[]={0xc2, 0x00, 0x28, 0x10, 0xc4, 0x00, 0x28, 0x14, 0x86, 0x80, 0x40,
 0x02, 0xc6, 0x20, 0x28, 0x18};//0x18 esta en 2063

int main(int argc, char *argv[])
{
  int dir_inic=2048,i,tam,mostrados;
  //cantidad de elementos del areeglo Byte
  tam=sizeof(Byte)/sizeof(unsigned char);
  if(tam>=10){
  for(i=0;i<10;i++){
     printf("%d\t%d\n",dir_inic+i,Byte[i]);
  }
  mostrados=10;
 }else {
       for(i=0;i<tam;i++){
     printf("%d\t%d\n",dir_inic+i,Byte[i]);
  }
  mostrados=tam;
 }
  system("PAUSE");
  
  if(tam-mostrados>=10){
    for(i=mostrados;i<mostrados+10;i++){
     printf("%d\t%d\n",dir_inic+i,Byte[i]);
  }
  return tam;
  //mostrados=mostrados+10;
 }else {
       for(i=mostrados;i<tam;i++){
     printf("%d\t%d\n",dir_inic+i,Byte[i]);
  }
  
  mostrados=tam-mostrados;
 }
    system("PAUSE");
  return 0;
}
