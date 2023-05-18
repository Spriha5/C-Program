
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int t,i,a,b,c;
scanf("%d", &t);
for (i=0;i<t;i++){
scanf("%d %d %d",&a,&b,&c);
int u;
u=b/a;
c*=u;
printf("%d\n",c);
    }
return 0;
}