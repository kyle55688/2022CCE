#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    char line[30];

    printf("�п�J�@�Ӧr��A���n�Ӫ�: ");
    scanf("%s", line);///Ū�J��Ӧr��A�S��&
    ///�|�H�Ů��_�r
    printf("�A��J:%s",line);
    int N = strlen(line);
    for(int i=0;i<N;i++){
        if(line[i]=='2'){
            printf("���2\n");
        }
    }
}

