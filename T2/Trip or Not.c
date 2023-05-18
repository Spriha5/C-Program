#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N,S,C,H,L,T,m,o;
    scanf("%d %d %d %d %d %d ",&N,&S,&C,&H,&L,&T);
if(N>L)
{
    o=S*C*H;
    m=T*(N-L);
  if(m>=o)
  {
      printf("Goa Jaayenge");
  }
  else
  {
  printf("Padhai Karenge");
  }
  
}
else
printf("Padhai Karenge");
    return 0;
}
