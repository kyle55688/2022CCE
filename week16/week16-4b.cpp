
#include <stdio.h>
#include <string.h>
int main(){
	char a[81];
	scanf("%s",a);
	int ans,x=strlen(a);
	for(int i=0;i<x/2;i++){
		if(a[i]!=a[x-i-1]){
		ans=0;
		break;
		}
		else ans=1;
	}

	if(ans==1)printf("YES");
	else printf("NO");
}
