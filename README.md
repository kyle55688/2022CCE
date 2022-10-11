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
