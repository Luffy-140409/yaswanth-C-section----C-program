#include<stdio.h>
int main(){
int weight,adult,child;
scanf("%d%d%d",&weight,&adult,&child);
if (adult*75+child*50 >=weight)
	printf("Boat is stable");
else
	printf("Boat will drown");
}


