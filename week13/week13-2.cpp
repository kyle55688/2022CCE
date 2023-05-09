#include <stdio.h>
#include <string.h>
int main(){
	char a[10];
	int i,len;
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len/2;i++){
	if(a[i]!=a[len-i-1])
		break;
	}
	if(i==len/2)printf("YES\n");
	else printf("NO\n");
}
