#include<stdio.h>
void main()
{
 int n,i,c=1;
 printf("enter a no");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{
 if(n%i==0)
  {
   c=2;
   }
   if(c==2)
   {
   printf("no");
   }
   else
   {
    printf("yes");
    }
    }}
