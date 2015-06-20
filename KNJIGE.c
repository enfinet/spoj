#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,max=-1,x;
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
		if(max<a[i]){
			max=a[i];
			x=i;
		}
	}
	int sum=0;
	sum+=(n-x-1);
	int y,num=max;
	for(y=x-1;y>=0;y--) {
		if(a[y]==max-1)
			max=a[y];
		else sum++;
	}
	printf("%d\n",sum);
	return 0;
}
