// A C program to determine the largest of three numbers using pointers.

#include <stdio.h>
int main() 
{
    float n1, n2, n3;
    float *p1,*p2,*p3;


    printf("Enter three numbers: \n");
    scanf("%f %f %f", &n1, &n2, &n3); 

//assigning the address of input numbers to pointers
    p1 = &n1;
    p2 = &n2;
    p3 = &n3;


    // if n1 is greater than both n2 and n3, n1 is the largest
    if (*p1 >= *p2 && *p1 >= *p3)
        printf("%.2f is the largest number .", *p1);

    // if n2 is greater than both n1 and n3, n2 is the largest
    else if (*p2 >= *p1 && *p2 >= *p3)
        printf("%.2f is the largest number.", *p2);

    // if both above conditions are false, n3 is the largest
    else
        printf("%.2f is the largest number.", *p3);

    return 0;
}
