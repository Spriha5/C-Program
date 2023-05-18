
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int n,t,r, sum = 0,a= 0 ;

    scanf("%d", &n);
t = n;
while (t!= 0)
{
t/= 10;
++a;
}
t=n;
while(t!= 0)
{
r=t%10;
sum+= pow(r,a);
t/=10;
}
if(sum==n)
printf("Armstrong Number.");
else
printf("Not Armstrong.");
return 0;
}