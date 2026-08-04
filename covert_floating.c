// implict or elplict dono hote hai
#include<stdio.h>
int main(){
int number;
printf("Enter the no");
scanf("%d",&number);
// yaha par floating ek no banaya float mai phir usme inter daal diya yeah 
// implict type hai
float floating = number;
printf("now the converted no is %f",floating);
    return 0;
}
// explict function
#include<stdio.h>
int main(){
int number;
printf("Enter the no");
scanf("%d",&number);
printf("now the converted no is %f",number(float));
    return 0;
}