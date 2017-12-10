#include <stdio.h>
#include <stdlib.h>
#include "funrecursiva.h"
int main(int argc, char *argv[])
{
  int N=20,i=3,j=N-i;
  system("mode 100,120");
  system("color 70");
  printf("%i!=%d\n",N,factorial(N));
  printf("%d\n",(factorial(N)/factorial(j)));
  int n=20,m=3;
  printf("%iP%i=%d\n",n,m,nPm(n,m));
  system("PAUSE");	
  return 0;
}
