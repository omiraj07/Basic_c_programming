#include<stdio.h>
int main(){
int no1,no2,result;
printf("Enter the  first no1 :");
scanf("%d",&no1);
printf("Enter the  second no2 :");
scanf("%d",&no2);
result = no1>no2 ? printf("%d is greater than %d",no1,no2) :printf("%d is grater than %d",no2,no1);
// printf("%d\n",result); yeah karne se charcter v count hone lagta hai
return 0;}