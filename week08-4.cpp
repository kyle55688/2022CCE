#include <stdio.h>

int main()
{
	int i;
	scanf("%d",&i);
	for(int a=1;a<=i;a++){
		int space=i-a, star=a,k;
		for(k=1;k<=space;k++) printf(" ");
		for(k=1;k<=star;k++) printf("*");
		printf("\n");
	}



}
