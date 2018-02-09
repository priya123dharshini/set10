#include<stdio.h>
void main()
{
 int n,s;
 printf("enter a number");
 scanf("%d",&n);
 while(n>0)
 {
   s=n%10;
   n=n/10;
   printf("%d",s);
 }}
