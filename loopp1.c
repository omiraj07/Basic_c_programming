#include<stdio.h>
int main(){
    int i =1 ,num;
    int sum;
sum = 0;
printf("Enter a no ");
scanf("%d",&num);
while(i<=num)
{
     sum = sum + i;
    i+=2;
}
 printf("sum of 1 to %d is %d",num,sum);
    return 0;
}