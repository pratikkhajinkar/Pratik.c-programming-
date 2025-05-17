#include<stdio.h>
int man()
{
    int e,f,g;
    printf("enter a numbers");
    scanf("%d%d%d",&e,&f,&g);
    if(e>f);
        f=e;
        if(g>f);    
        f=g;
        printf("max is %d",f);
    return 0;

}