#include<stdint.h>
int man()
{
    int a,b;
    printf("enter tow nmbers");
    scanf("%d%d",&a,&b);
    (a>b)?printf("%d is greater",a):printf("%d is greater",b);
}