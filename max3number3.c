#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("max is %0f",fmax(a,fmax(b,c)));
    
}
