#include <stdio.h>
int main()
{
    ///int a=3;
    ///while(a>0){
    ///printf("a是%d,a>0\n",a);
    ///a--;
    ///}
    for(int i=0;i<3;i++)
    {
        printf("迴圈(電腦習慣) i是%d\n",i);
    }
    for(int i=1;i<=3;i++)
    {
        printf("迴圈(人類熟悉) i是%d\n",i);
    }
    for(int a=3; a>0; a--)
    {
        printf("倒過來的迴圈a是%d\n",a);
    }
}

