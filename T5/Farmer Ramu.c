
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int n,x,y,i,s,j;
scanf("%d",&n);
for(int k=1;k<=n;k++)
 {
scanf("%d %d",&x,&y);    
    int p=x+y; 
for(i=1;i<p;i++)
{
 s=p+i; 
 int c=0; 
for ( j=1;j<=s;j++) 
{
if(s%j==0)
 c++;
 }
if(c==2)
{ printf("%d\n",i); 
break;
 }
    s=0;
}
}return 0;
}
