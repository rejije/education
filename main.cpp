//#include "stdlib.h" "tchar.h"
#include "stdio.h"

int main(int argc, char* argv[])
{
    for(int i=0; i<argc; i++) {
      printf("%s\n", argv[i]);   
    }
    
    
   /* int colichestvo_zvyozdochek=8;
    
    char asd[2]={'*'};
    for (int i=0; i<colichestvo_zvyozdochek; i++){                      Типы в языках программирования
Книга, Бенджамин Пирс
      printf(asd);
    }
    */
    
   // char asd[]={'*','*','*','*', '*', '*', '*','\0'};
    char asd[]="*********"; 
    printf(asd);
    
    for(int i=argc; i>0; i--) {
      printf("%s\n", argv[i]);   
    }
return 0;
}



