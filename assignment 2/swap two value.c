#include<stdio.h>
int main()
{
   int x=5, y=10,a;
   a=x;
   x=y;
   y=a;
   printf("x=%d, y=%d",x,y);
   return 0;
}
