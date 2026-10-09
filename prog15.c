#include<stdio.h>
int main()
{
float a;
scanf("%f ",&a);
if (a>=90 && a<=100)
	printf("A grade");
else if(a<90 && a>=70)
	printf("B grade");
else if(a<70 && a>=50)
	printf("C grade");
else if (a>=0 && a<=49)
	printf("D grade");
else 
	printf("invalid");
return 0;
}

