#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[n+1],i;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		int min=1000001,num;
		int m;
		scanf("%d",&m);
		for(i=0;i<m;i++) {
			scanf("%d",&num);
			int j,x;
			for(j=0;j<n;j++) {
				x=num-a[j];
				if(x<0)x=-1*x;
				if(min>=x)min=x;
			}
		}
		printf("%d\n",min);
	}
	return 0;
}
