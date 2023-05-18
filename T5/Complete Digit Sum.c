#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,sum=0,a,s1=0,b;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n/=10;
    }
    int c=sum;
    while(c>0)
    {
        b=c%10;
        s1=s1+b;
        c/=10;
    }
    
    printf("%d",s1);

 
    return 0;
}

