#include <stdio.h>
#include <string.h>
int main()
{
    char line[30];


    scanf("%s", line);///讀入整個字串，沒有&
    ///會以空格斷字
    int N = strlen(line);
    int ans=0;
    for(int i=0;i<N;i++){
        if(line[i]=='2'){
	 		ans++;
        }
    }
    printf("%d\n",ans);
}


