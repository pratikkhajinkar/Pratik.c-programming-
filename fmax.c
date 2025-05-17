#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("max is %d",fmax(a,b));
    return 0;
}