#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
    for(int j=0;j<n-i-1;j++)
    {
       if(a[j]>a[j+1]){
           int t=a[j];
           a[j]=a[j+1];
           a[j+1]=t;
      }}
      }
      printf("%d %d",a[n-1],a[n-2]);
    return 0;
}