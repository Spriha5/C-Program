
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,sum=0,sum1=0,sum2=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
       if(i%2==0)
       {
           sum1+=(i*i*i);
           
       }
        else
        {
            sum2+=(i*i*i);
        }
    }
            sum=sum2-sum1;

    printf("%d",sum);

      
    return 0;
}