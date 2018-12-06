/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "stdio.h"


int main()
{
    bool con1,con2,con3,con4;
    
  const unsigned short year=3200;
  unsigned short days=365;
    
    con1=((year%4)==0);
    con2=((year%100)!=0);
    con3=((year%400)==0);
//  con4=(con1&&con2)||((!con2)&&con3);             //(con3)&&(!con2)    con2||con3 con3||con2
    con4=(con1&&con2)||(con3);
    days=days + short(con4);
    
//    auto i="In";
//    auto y="year = ";
//    auto d="days";
    
    printf("In %d year = %d days", year, days);
return 0;
}

