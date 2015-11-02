#include "Torphy.h"
#include <stdio.h>

int Torphy::LisEA(short numEA) {
	
     int x,y;
     short num;
     num=64;

     if (numEA>=0 && numEA<=7)
     {
	   x=EcrisOr(num+numEA, 1);
       if (x==1)
       {
        y= LisRs(1);
        return y;
        y=0;
       } else 
	     {
          return -1;
         }
  
     } 
}

int Torphy::LisEB(short numEB) {

   int z,b;
   if (numEB>=0 && numEB<=7)
   {
    z=EcrisOr(96+numEB, 1);
    if (z==1)
    {
     b= LisRs(1);
     return b;
    }
   } else
     {
      return -3;
     }

   return (-2);
}

int Torphy::LisEF(short numEF) {

     int e,f;
	 if (numEF>=0 && numEF<=7)
     {
	  e=EcrisOr(208+numEF, 1);
      if (e==1)
      {
       f= LisRs(1);
       return f;
      }
    } else
      {
       return -1;
      }
}

Torphy::Torphy() {
 
}

Torphy::~Torphy() {
	
}





