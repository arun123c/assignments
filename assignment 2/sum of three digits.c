#include<stdio.h>
int main()
{

    int x=256,sum;
    sum=x%10;
    x=x/10;
    sum=(x%10) + sum;
    x=x/10;
    sum=x+sum;
    printf("sum of three three digit 256 is %d",sum);

    return 0;
}
