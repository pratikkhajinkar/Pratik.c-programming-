#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    float per;
    printf("enter 1st subject marks");
    scanf("%d",&s1);
    printf("enter 2nd subject marks");
    scanf("%d",&s2);
    printf("enter 3rd subject marks");
    scanf("%d",&s3);
    printf("enter 4th subject marks");
    scanf("%d",&s4);
    printf("enter 5th subject marks");
    scanf("%d",&s5);
    per=(s1+s2+s3+s4+s5)/5;
    printf("percentage is %f",per);
    if(per>=90)
        printf("grade is A");
    else if(per>=80)
        printf("grade is B");
    else if(per>=70)
        printf("grade is C");
    else if(per>=60)
        printf("grade is D");
    else if(per>=50)
        printf("grade is E");
    else
        printf("grade is F");
    return 0;
}