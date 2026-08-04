#include<stdio.h>
int main(){
int year;
printf("Enter the year :");
scanf("%d",&year);
// Leap Year Rules
// Agar year 400 se completely divide ho jaye (remainder = 0)
// ➜ Leap Year ✅
// Nahi to agar 100 se divide ho jaye (remainder = 0)
// ➜ Leap Year nahi hai ❌
// Nahi to agar 4 se divide ho jaye (remainder = 0)
// ➜ Leap Year ✅
// Baaki sab
// ➜ Leap Year nahi hai ❌
if (year % 400 ==0 || year % 4 == 0){ 
    printf("%d is leap year",year);
}
elseif(year%100!=0){

    printf("%d is not a leap year",year);}
return 0;}