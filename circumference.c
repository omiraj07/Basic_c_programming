#include<stdio.h>
int main()
{const float PI = 3.14;
 int radius; 
float circumference;
printf("Enter the no :");
scanf("%d",&radius);
circumference = 2 * PI * radius;
printf("The circumference of circle is:\n%f",circumference);
    return 0;
}