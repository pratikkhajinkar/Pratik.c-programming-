#include<stdio.h>
int main()
{
    int roll;
    char name [100],sub1[100],sub2[100],sub3[100];  
    float m1, m2, m3, total, avg;   
    char grade;

    FILE *fp;
    printf("enter student roll number: ");
    scanf("%d", &roll);
    printf("enter student name: "); 
    scanf("%s", name);
    printf("enter subject 1 name: ");
    scanf("%s", sub1);
    printf("enter subject 2 name: ");
    scanf("%s", sub2);
    printf("enter subject 3 name: ");
    scanf("%s", sub3);
    printf("enter marks of subject 1: ");
    scanf("%f", &m1);
    printf("enter marks of subject 2: ");
    scanf("%f", &m2);
    printf("enter marks of subject 3: ");
    scanf("%f", &m3);
    total = m1 + m2 + m3;
    avg = total / 3;
    if (avg >= 90)
        grade = 'A';
    else if (avg >= 80)
        grade = 'B';
    else if (avg >= 70)
        grade = 'C';
    else if (avg >= 60)
        grade = 'D';
    else
        grade = 'F';
    fp = fopen("student_result.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    



}   