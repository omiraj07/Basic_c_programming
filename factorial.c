#include<stdio.h>
int main(){
int num;
printf("Enter the no :");
scanf("%d",&num);
int factorial = 1;
// int i = 1 ;
// // i ko user ke input tak le jao
// while(i<=num){
// //    hamesha i ka updation joh current no ka function karoge uske baad dena
//     factorial = factorial * i;
//      i++;
// }
// printf("factorial of %d is %d",num,factorial);
//     return 0;
// }
for(i=1;i<=num;i++)
{ factorial = i * factorial}
printf("factorial of %d is %d",num,factorial);
    return 0;}
