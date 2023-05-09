#include <stdio.h>
int main()
{
	char a[4];
	scanf("%s",a);
	int ans=0,i,n=1;
	for(i=3;i>=0;i--){
		ans=ans+(a[i]-'0')*n;
		n*=2;
	}
	printf("%d\n",ans);
}
