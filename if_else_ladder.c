#include<stdio.h>
int main(){
int age;
printf("Enter the no:\n");
scanf("%d",&age);
if(age<18){
    printf("They are child\n");
}
else if(age>=60){
    printf("they are senior citizen");
}
else{ 
    printf("they are adult");}
    return 0;
}