#include<stdio.h>
int main(){
int marks;
printf("Enter your marks :");
scanf("%d",&marks);
if (marks >=91){
printf("your grade is A+");
}
else if (marks >= 81){
printf("your grate is A");
}
else if (marks>=71){
    printf("your grade is B");
}
else if (marks>=61){
    printf("your grade is C");
}
else{
    printf("your grade is D");
}
    return 0;
}