#include<stdio.h>
int main()
{
		int x,y;
		scanf("%d%d",&x,&y);
		int a[110][110]={0};
		int i,j;
		for(j=1;j<=y;j++)
			scanf("%d",&a[1][j]);
		for(i=2;i<=x;i++)
			for(j=1;j<=y;j++) {
				scanf("%d",&a[i][j]);
				int max=100000;
				if((j-1) && max>=a[i-1][j-1])
					max=a[i-1][j-1];
				if(max>=a[i-1][j])
					max=a[i-1][j];
				if((j+1)<=y && max>=a[i-1][j+1])
					max=a[i-1][j+1];
//				printf("%d_",max);
				a[i][j]+=max;
			}
		int sum=100000;
		for(j=1;j<=y;j++)
			if(sum>=a[x][j])
				sum=a[x][j];
		printf("%d\n",sum);
	return 0;
}
