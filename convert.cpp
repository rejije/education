#include <iostream>
#include <cassert> 
#include "stdlib.h"
#include "stdio.h"

int main() 
{
 unsigned short a,b;
 bool q1,q2,q3,z1,z2,z3,q4,z4,x;
 float value,tv,valueM;
 char r1,r2,t1,t2,y1,y2,u1,u2;

const float cm = 100;
const float inch = 39.37;
const float foot = 3.28;
const float m = 1;

  std::cout<<"source measure unit"<<std::endl;
     std::cin>>a;
  std::cout<<"target measure unit"<<std::endl;
     std::cin>>b;
     
 assert(a>0&&a<5);
 assert(b>0&&b<5);
 
  std::cout<<"source value"<<std::endl;
     std::cin>>value;
 
 q1 = (a % 10) == 1;
 q2 = (a % 10) == 2; 
 q3 = (a % 10) == 3;
 q4 = (a % 10) == 4;

 z1 = (b % 10) == 1;
 z2 = (b % 10) == 2; 
 z3 = (b % 10) == 3;
 z4 = (b % 10) == 4;

 valueM=value*q1/cm + value*q2/inch + value*q3/foot + q4*value;
  tv=z1*valueM*cm + z2*valueM*inch + z3*valueM*foot + z4*valueM;

 r1=q1*'c' + q2*'i' + q3*'f' + q4*'m';  t1=q1*'m' + q2*'n' + q3*'o'; y1=q2*'c' + q3*'o'; u1=q2*'h' + q3*'t';
  r2=z1*'c' + z2*'i' + z3*'f' + z4*'m';  t2=z1*'m' + z2*'n' + z3*'o'; y2=z2*'c' + z3*'o'; u2=z2*'h' + z3*'t';

std::cout<<value<<" "<<r1<<t1<<y1<<u1<<" = "<<tv<<" "<<r2<<t2<<y2<<u2;
 return 0;
}


