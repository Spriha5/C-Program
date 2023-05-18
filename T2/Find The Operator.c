#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A,B,R;
    scanf("%d%d%d",&A,&B,&R);
    if(A+B==R)
      {printf("+");}
      else if(A-B==R||B-A==R)
      {printf("-");}
      else if(A/B==R||B/A==R)
      {printf("/");}
      else if(A*B==R)
       {printf("*");}
       else if(A%B==R||B%A==R)
         {printf("%%");}
    else
      {printf("operator no found");}
     return 0;
}