#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,count=0;
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
      for(i=0;i<n;i++)
      {
      if(a[n-1]==a[i])
      count=count+1;
      }
      printf("%d",count);
      
    return 0;
}
