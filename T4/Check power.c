#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int n,i,p;
scanf("%d",&n);
 p=1;
for(i=0;i<n;i++)
{
if(p==n)
{
printf("1");
break;
}
p*=2;
 }
    if(p!=n)
       printf("0");

  
    return 0;

}

  