// ab power use karna hai toh kuch import karna hoga
#include<stdio.h>
#include<math.h>
int main(){
float principal,rate,time,CI;
printf("welcometo CI calculator");
printf("\nenter principle amount :");
scanf("%f",&principal);
printf("enter interest rate :");
scanf("%f",&rate);
printf("enter time taken :");
scanf("%f",&time);
CI = principal*pow((1 + rate/100),time);
printf("%.2f is the reqired CI",CI);
// .2f bata raha hai decimal ke baad 2 point aayega
    return 0;
}