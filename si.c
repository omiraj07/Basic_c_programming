#include<stdio.h>
int main(){
float principal,rate,time,SI;
printf("welcometo SI calculator");
printf("\nenter principle amount :");
scanf("%f",&principal);
printf("enter interest rate :");
scanf("%f",&rate);
printf("enter time taken :");
scanf("%f",&time);
SI = principal * rate * time/100;
printf("%.2f is the reqired SI",SI);
// .2f bata raha hai decimal ke baad 2 point aayega
    return 0;
}