#include <stdio.h>
int main(){
	int a,ans=0;
	scanf("%d",&a);
	while(a!=0){
		ans=a%10;
		a/=10;
	}
	if(ans<0) ans-=ans+ans;
	printf("%d\n",ans);
}
