#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	while(a%10!=0){
		printf("%d",a%10);
		a=a/10;
	}
	printf("\n");
}
