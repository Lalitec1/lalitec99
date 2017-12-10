#include "funrecursiva.h"

int factorial(int n){
  if(n==1){
           return 1;
           }else{
                 return n*factorial(n-1);
                 }
}

int nPm(int nObj,int dmNm){
   int nu=factorial(nObj);
   int i=nObj-dmNm;
   int de=factorial(i);
   return nu/de;
}
