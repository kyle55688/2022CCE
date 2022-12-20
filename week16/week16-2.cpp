#include <stdio.h>
#include <string.h>
char line[3000];
char line2[3000];

int main()
{
    printf("請輸入一行字(不要有空格)\n");
    scanf("%s",line);
    int n=strlen(line);
    printf("字串的長度是:%d\n",n);
    strcpy(line2,line);
    printf("line2: %s\n",line2);
}
