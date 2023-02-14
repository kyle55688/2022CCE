#include <stdio.h>
int sum(int a,int b);
int main()
{///再用之前，要先宣告或定義
    int ans=sum(2,3);///使用呼叫
    printf("ans: %d\n",ans);
}
int sum(int a,int b)///定義
{
    return a+b;
}///回傳給別人
