#include<stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);
printf("%d\n%d",(a<b)&&(b>a),(a==b)||(a<b));
printf("\n%d",!(a));
return 0;
}

