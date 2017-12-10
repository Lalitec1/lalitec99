#include <stdio.h>
#include <stdlib.h>

int intArr[]={2,0,1,7,1,0,0,9,1,6,2,5};

/**
* Algoritmo burbuja
*Orden de mayor a menor.
*/
int main(int argc, char *argv[]){
  int tmp, i, p;
  for(p=10;p>=0;p--){
  for(i=0;i<=p;i++){
     if(intArr[i]<intArr[i+1]){
     tmp=intArr[i];
     intArr[i]=intArr[i+1];
     intArr[i+1]=tmp;
     }
    }
  for(i=0;i<=11;i++){
  printf("%d ",intArr[i]);
  }
  printf("\n");
  }

  
  system("PAUSE");	return 0;
}
