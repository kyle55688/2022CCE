#include <stdio.h>
int main(){
	int a[6],max,min;
	scanf("%d",&a[0]);
	max=a[0];
	min=a[0];
	for(int i=1;i<6;i++){
		scanf("%d",&a[i]);
		if(max<a[i]) max=a[i];
		else if(min>a[i]) min=a[i];
	}
	printf("%d",max-min);
}
