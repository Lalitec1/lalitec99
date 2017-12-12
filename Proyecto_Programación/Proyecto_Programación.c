#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
FILE *prog=fopen("Prueba.txt","rb");

 if(prog == NULL){
 	perror("Error en la apertura del archivo");
 	return 1;
 }
 
 char car;
 
 while (feof(prog) == 0){
 	car = fgetc(prog);
 	
 	 	
	  
 }
  //system("PAUSE");	
  return 0;
}
