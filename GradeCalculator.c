// A C program that inputs a student's name, roll number, and marks in three subjects, then calculates and displays the student's name, roll number, and percentage score.

#include <studio.h>
#include <string.h>

int main()
{
int Roll_No,Mark1,Mark2,Mark3;
float per;
    char S_Name[20],Sub1[10],Sub2[10],Sub3[10];

    printf("Enter the name of the student:\n");
    scanf("%s", &S_Name);
    printf("Enter the Roll No. of the student:\n");
    scanf("%d", &Roll_No);
    printf("Enter the names of subjects:\n");
    scanf("%s%s%s", &Sub1,&Sub2,&Sub3);
    printf ("Enter the marks obtained out of 100 in %s ,%s ,%s respectively:\n",Sub1,Sub2,Sub3);
    scanf("%d %d %d", &Mark1, &Mark2, &Mark3);

    printf("Marks and percentage obtained by %s with Roll No. %d are as follows-\n",S_Name,Roll_No);
    printf("%s :%d \n",Sub1,Mark1);
    printf("%s :%d \n",Sub2,Mark2);
    printf("%s :%d \n",Sub3,Mark3);
    printf("Percentage: %.2f percent",per);
    return 0;

}
