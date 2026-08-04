#include<stdio.h>
int main(){
int num,sum =0;
printf("Enter the no :");
scanf("%d",&num);
int temp = num; //original value yaad rakhe loop value koh tod ke zero kar deta hai
while(num>0){
    sum = sum + num%10;
    num = num/10; //update hi hai
}
printf("the sum of digit of %d is %d",temp,sum);
return 0;}
// Har loop se pehle khud se ek question pucho:
// "Loop kis cheez ko badal raha hai?"
// Agar answer hai "1 se 10 tak count karna" → i use hoga.
// Agar answer hai "Number ki digits khatam karni hain" → num = num / 10.
// Agar answer hai "String ke characters dekhne hain" → i ya pointer use hoga.
