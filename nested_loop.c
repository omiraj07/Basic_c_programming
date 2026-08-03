#include<stdio.h>
int main(){
int number;char indian;
printf("Enter the no\n");
// space de diya karo %c se phela yaha kuch v buffer problem hona lagta hai
// baki kisi mai problem nhi hoti
scanf(" %d",&number);
printf("conform your nationality by Y/N\n");
scanf(" %c",&indian);
if(indian == 'Y')
{
if(number<=10){
    printf("better luck next time");}
    else if(number<50){
        printf("you are so close");}
        else { printf("you got it");}
    }
else {
    printf("you are not indian citizen");
}
    return 0;
}