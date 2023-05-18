#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main() 
{
 int i,T,N,m,sum=0;
   scanf("%d",&T);
for(i=0;i<T;i++)
{
sum=0;
scanf("%d",&N);
while(N>0)    
{    
m=N%10;    
sum=sum+m;    
N=N/10;    
}    
printf("%d\n",sum);  
  }   
}