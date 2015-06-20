#include<stdio.h>
#include<stdlib.h>
int compare (const void * a, const void * b)
{
	  return ( *(int*)a - *(int*)b );
}
int a[100000],b[100000];
int main()
{
	int n;
	scanf("%d",&n);
	while(n) {
		int i;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		qsort(a,n,sizeof(int),compare);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		qsort(b,n,sizeof(int),compare);
		long long sum=0ll;
		int j;
		for(i=0,j=n-1;i<n;i++,j--)
			sum+=((long long)((long long)a[i]*(long long)b[j]));
		printf("%lld\n",sum);
		scanf("%d",&n);
	}
	return 0;
}
