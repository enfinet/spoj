#include<stdio.h>
int main()
{
	int i=2,j=1,count=2;
	int a[1000001];
	a[1]=1;
	while(i<=1000000) {
		int x;
		for(x=1;x<=a[j];x++) {
			if(i<=1000000)
			a[i++]=count;
		}
		count++;
		j++;
	}
	int t;
	scanf("%d",&t);
	int c=1;
	while(t--) {
		int n;
		scanf("%d",&n);
		printf("Case #%d: %d\n",c,a[n]);
		c++;
	}
	return 0;
}
