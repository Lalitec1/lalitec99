#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SUBM(fil,col) float SM##fil##col[2][2]
#define SM(i,j) printf("SM%d%d[2][2]= \n",i,j)
#define MSUBM(row,col,A)  for(i=0;i<3;i++){\
for(j=0;j<3;j++){\
if(i<row && j<col){\
SM##row##col[i][j]=A[i][j];\
}\
if(i<row && j>col){\
SM##row##col[i][j-1]=A[i][j];\
}\
if(i>row && j<col){\
SM##row##col[i-1][j]=A[i][j];\
}\
if(i>row && j>col){\
SM##row##col[i-1][j-1]=A[i][j];\
}\
}\
}
#define show_m2x2(c)\
  for(i=0;i<2;i++){\
                   for(j=0;j<2;j++){\
                                    printf("\t%f",c[i][j]);\
                                    }\
                   printf("\n");\
                  }
#define show_m3x3(c)\
  for(i=0;i<3;i++){\
                   for(j=0;j<3;j++){\
                                    printf("\t%f",c[i][j]);\
                                    }\
                   printf("\n");\
                  }
#define DET2x2(sm2x2) sm2x2[0][0]*sm2x2[1][1]-sm2x2[0][1]*sm2x2[1][0]


int main(int argc, char *argv[]){
  int i,j;
  float A[3][3]={{1,3,5},{7,9,11},{13,15,17}};
  
  show_m3x3(A);
  printf("*********************************************************************\n");
  SM(0,0);
  SUBM(0,0);
  MSUBM(0,0,A);
  show_m2x2(SM00);
  printf("*********************************************************************\n");  
  SM(0,1);
  SUBM(0,1);
  MSUBM(0,1,A);
  show_m2x2(SM01);
  printf("*********************************************************************\n");
  SM(0,2);
  SUBM(0,2);
  MSUBM(0,2,A);
  show_m2x2(SM02);
  printf("*********************************************************************\n");
  SM(1,0);
  SUBM(1,0);
  MSUBM(1,0,A);
  show_m2x2(SM10);
  printf("*********************************************************************\n");
  SM(1,1);
  SUBM(1,1);
  MSUBM(1,1,A);
  show_m2x2(SM11);
  printf("*********************************************************************\n");
  SM(1,2);
  SUBM(1,2);
  MSUBM(1,2,A);
  show_m2x2(SM12);
  printf("*********************************************************************\n");
  SM(2,0);
  SUBM(2,0);
  MSUBM(2,0,A);
  show_m2x2(SM20);
  printf("*********************************************************************\n");
  SM(2,1);
  SUBM(2,1);
  MSUBM(2,1,A);
  show_m2x2(SM21);
  printf("*********************************************************************\n");
  SM(2,2);
  SUBM(2,2);
  MSUBM(2,2,A);
  show_m2x2(SM22);
  printf("*********************************************************************\n");

  
  system("PAUSE");	
  return 0;
}
