#include<stdio.h>
int main(){
int number;char indian;
printf("Enter the no\n");
scanf(" %d",&number);
printf("conform your nationality by Y/N\n");
scanf(" %c",&indian);
if( indian == 'Y' && number<=10 )
{ printf("you are lucky and indian citizen");}
else {
    printf("you are not indian citizen");
}
    return 0;
}