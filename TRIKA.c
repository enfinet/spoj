#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int x,y;
	scanf("%d%d",&x,&y);
	int a[25][25]={0},b[n+1][m+1];
	int sum=0;
	int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++) {
//			printf("%d_",a[i][j]);
			scanf("%d",&b[i][j]);
		}
	for(i=x+1;i<=n;i++) {
		a[i][y]=a[i-1][y]+b[i][y];
//		printf("%d_",a[i][y]);
	}
//	printf("\n");
	for(j=y+1;j<=m;j++) {
		a[x][j]=a[x][j-1]+b[x][j];
//		printf("%d_",a[x][j]);
	}
//	printf("\n");
	for(i=x+1;i<=n;i++) {
		for(j=y+1;j<=m;j++) {
			if(a[i-1][j]<=a[i][j-1])
				a[i][j]=a[i-1][j]+b[i][j];
			else 
				a[i][j]=a[i][j-1]+b[i][j];
//			printf("%d_",a[i][j]);
		}
//		printf("\n");
	}
	if(b[x][y]-a[n][m] >=0)
	printf("Y %d\n",b[x][y]-a[n][m]);
	else printf("N\n");
	return 0;
}
