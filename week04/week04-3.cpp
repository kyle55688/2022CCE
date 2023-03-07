//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
#include <stdio.h>
#include <string.h>
int testMirror(char line[50])
{
	return 0;
}
int testPalindrome(char line[50])
{
	int N=strlen(line);
	int yes=0;
	for(int i=0;i<N;i++){
		if(line[i]==line[N-1-i]) yes++;
	}
	if(yes==N)return 1;
	else return 0;
}
int main()
{
	char line[50];
	while(scanf("%s",line)==1){
		printf("%s --",line);
		int p=testPalindrome(line);
		int m=testMirror(line);
		if(p==0&&m==0) printf("is not a palindrome.\n\n");
		if(p==1&&m==0) printf("is a regular palindrome.\n\n");
		if(p==0&&m==1) printf("is a mirrored string.\n\n");
		if(p==1&&m==1) printf("is a mirrored palindrome.\n\n");
	}
}
