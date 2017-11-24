#include <stdio.h>

long main(){
     char charArray[20];
     charArray[0]='A';
     charArray[1]='l';
     charArray[2]='e';
     charArray[3]='a';
     charArray[4]=' ';
     charArray[5]='j';
     charArray[6]='a';
     charArray[7]='c';
     charArray[8]='t';
     charArray[9]='a';
     charArray[10]=' ';
     charArray[11]='e';
     charArray[12]='s';
     charArray[13]='t';
     charArray[14]='\0';
     int i;
     while(charArray[i]!='\0'){
                               printf("%c",charArray[i]);
                               i=i+1;
                               }
                               system("PAUSE");
                               return 0;
}//end main()
