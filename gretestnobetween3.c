#include<stdio.h>
int main(){
float n1,n2,n3;
printf("Enter the first no :");
scanf("%f",&n1);
printf("Enter the second no :");
scanf("%f",&n2);
printf("Enter the third no :");
scanf("%f",&n3);
// relational operator for three input
if(n1>n2 && n1>n3){
    printf("%f is greatest no",n1);
}
else if(n2>n3 && n2>n1){
    printf("%f is greatest no ",n2);
}
else{ printf("%f is greatest no",n3);}
    return 0;
}