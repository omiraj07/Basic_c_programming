#include<stdio.h>
int main(){
int no;
printf("Enter the no :");
scanf("%d",&no);
if(no == 0){
    printf("its  value is zero");
}
else if(no>0){
    printf("positive no");
}
else{ printf("negative no");}

    return 0;
}