#include <stdio.h>
int main()
{
	int a[30][30],i,j,m,n;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%2d ",a[m-j-1][i]);
		}
	printf("\n");
	}
}
