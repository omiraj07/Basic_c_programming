#include<stdio.h>
int main()
{const float PI = 3.14;
 int radius; 
float area;
printf("Enter the no :");
scanf("%d",&radius);
area =  PI * radius* radius;
printf("The area of circle is:\n%f",area);
    return 0;
}