# 2022cce
1.畫星星
```cpp
#include <stdio.h>
int main()
{
 int i,j ;
    for(i=5;i>0;i--){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("i:%d星星\n",i);
    }

}
```
2.畫出等腰三角形
```cpp
#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<6;i++){

        int space=5-i,star=2*i-1,k;
        for(k=0;k<space;k++) printf(" ");
        for(k=0;k<star;k++) printf("*");
        printf("\n");

    }
}
```
3.暴力解法找最大公因數
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個整數要約分:");
    int a,b;
    scanf("%d %d ",&a,&b);
    int ans;
    for(int i=1;i<=a;i++){
    if(a%i==0&& b%i==0){
    ans=i;
        }
    }
    printf("ans:%d可約分",ans);
}
```
4.輾轉相除法 
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1){
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;

    }
     printf("答案b: %d ",b);
    }
```
5.long long int
```cpp
#include <stdio.h>
    int main()
    {
        ///int是32位元可裝9到10位數
        int n=9876543210;
        printf("int印出來%d\n",n);
        ///long long int 可裝19到20位數
        long long int a=9876543210;
        printf("long long int 印出來 %lld\n",a);
        ///%lld 是 long long d的簡寫
    }
```
6.long long int 最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int ans;
    for(long long int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("最大公因數是:%lld\n",ans);
```
7.long long int 輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    long long int a,b ,c;
    scanf("%lld %lld",&a,&b);
    while(1){
        c=a%b;
        printf("a:%lld b:%lld c:%lld\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;

    }
     printf("答案是:%lld\n",b);
}
}
```
8.剝皮算法撥出每個位數的數字
```cpp
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    printf("現在的個位數:%d\n",n%10);
    n=n/10;
    printf("現在的個位數:%d\n",n%10);
    n=n/10;
    printf("現在的個位數:%d\n",n%10);
    n=n/10;
    printf("現在的個位數:%d\n",n%10);
    n=n/10;
    printf("現在的個位數:%d\n",n%10);
    n=n/10;
    printf("現在的個位數:%d\n",n%10);
    n=n/10;
    printf("現在的個位數:%d\n",n%10);
    n=n/10;
    printf("現在的個位數:%d\n",n%10);
    n=n/10;
    printf("現在的個位數:%d\n",n%10);
    n=n/10;
    printf("現在的個位數:%d\n",n%10);
    n=n/10;
}
```
