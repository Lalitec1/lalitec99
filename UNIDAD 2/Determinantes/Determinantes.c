#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float A[3][3]={{1,-3,5},{7,4,-1},{-2,0,6}},detA;
    int i,j;
    for(i=0;i<3;i++){
                     for(j=0;j<3;j++){
                                      printf("\t%.2f",A[i][j]);
                                      }
                     printf("\n");
                     }
    detA=(A[0][0]*A[1][1]*A[2][2])+(A[1][0]*A[2][1]*A[0][2])+(A[2][0]*A[0][1]*A[1][2])-(A[2][0]*A[1][1]*A[0][2])-(A[1][0]*A[0][1]*A[2][2])-(A[0][0]*A[2][1]*A[1][2]);
    printf("El determinante de A es= %.2f\n",detA);
    
  system("PAUSE");	
  return 0;
}
