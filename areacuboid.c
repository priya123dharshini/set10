#include<stdio.h>
void main()
{
 int l,b,h,v;
 printf("enter length,breadth and height");
 scanf("%d %d %d",&l,&b,&h);
 printf("the volume is %d",l*b*h);
v=(2*l*b)+(2*b*h)+(2*h*l);
printf("the area is %d",v);
}
