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
