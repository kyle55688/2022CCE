#include <stdio.h>
int main(){
	int a[100],i=0,ans=0;
	while(scanf("%d",&a[i])==1){
		if(a[i]==999)break;
		ans+=a[i];
		printf("Enter an integer ( 999 to end ): \n");
		i++;
	}
	printf("Enter an integer ( 999 to end ): \n");
	printf("The total is: %d",ans);
}
