#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Diseñe un programa que genere 5 numero aleatorios que todos sean múltiplos de 5 que no
se pierda el valor de las 5 variables*/

int main(int argc, char *argv[])
{ 
    
    int b1,b2,b3,b4,b5, f1=1,f2=1,f3=1,f4=1,f5=1;
    int x, c=0;
     
    
   // for(c=0; c<5 ;c=c) //Los valores que son verdad son 0,1,2,3,4
    while(c<5)
	{
    	srand(time(NULL));
        x=rand();
        if(x%5==0 && f1==1)
        {
            c++;       
            b1=x;
            f1=0;
        }
        x=rand();
        if(x%5==0 && f2==1)
        {    c++;
            b2=x;
            f2=0;
        }   
        x=rand();
        if(x%5==0 && f3==1)
        {   c++;
            b3=x;
            f3=0;
        }   
        x=rand();
        if(x%5==0 && f4==1)
        {   c++;
            b4=x;
            f4=0;
        }
        x=rand();
        if(x%5==0 && f5==1)
        {    b5=x;   
              c++;
              f5=0;
        }
        printf("\n%d, %d, %d, %d, %d", b1,b2,b3,b4,b5);
         
    }
    
    printf("\nLos n\243meros aleatorios que son multiplos de 5 son:\n");
    printf(" %d\n %d\n %d\n %d\n %d\n", b1,b2,b3,b4,b5);
  
  system("PAUSE");	
  return 0;
}
