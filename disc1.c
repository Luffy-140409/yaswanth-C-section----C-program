#include<stdio.h>
int main(){
int x,y,choice;
scanf("%d%d%d",&x,&y,&choice);
switch (choice){
case 1:printf("addition of %d and %d is %d",x,y,x+y);break;
case 2:printf("subtraction of %d and %d is %d",x,y,x-y);break;
case 3:printf("multiplication of %d and %d is %d",x,y,x*y);break;
case 4:printf("division of %d and %d is %d",x,y,x/y);break;
case 5:printf("remainder of %d and %d is %d",x,y,x%y);break;
default:
printf("Invalid");}}
