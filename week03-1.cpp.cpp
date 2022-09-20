#include <stdio.h>
main()
{
    int a,b;
    printf("請輸入2個字:");
    scanf("%d%d",&a,&b);

    printf("%d+%d是%d\n",a,b,a+b);
    printf("%d-%d是%d\n",a,b,a-b);
    printf("%d*%d是%d\n",a,b,a*b);
    printf("%d/%d是%d\n",a,b,a/b);
    printf("%d除法%d的餘數是%d是%d\n",a,b,a%b);
}
