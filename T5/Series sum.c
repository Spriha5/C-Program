#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
 int n;
    scanf("%d",&n);
    int k=0;
    float s=0;
    
    for( int i=1;i<=3*n;i++)
    {
        if(k==n)
            break;
        if(i%2!=0)
        {
        s=s+((pow(i,2))/pow(i,3));
            k++;
        }
    }
        printf("%f",s);
  
    return 0;
}