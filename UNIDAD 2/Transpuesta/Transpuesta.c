#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){
  float A[2][3]={{2,4,6},{8,10,12}},At[3][2];
  int i,j;
  printf("A =\n");
  for(i=0;i<2;i++){
                   for(j=0;j<3;j++){
                                    printf("\t%.0f",A[i][j]);
                                    }
                   printf("\n");
                   }
  for(i=0;i<3;i++){
                   for(j=0;j<2;j++){
                                    At[i][j]=A[j][i];
                                    }
                   }
                   printf("\n");
  for(i=0;i<3;i++){
                   for(j=0;j<2;j++){
                                    printf("\t%.0f",At[i][j]);
                                    }
                   printf("\n");
                   }
  system("PAUSE");	
  return 0;
}
