#include<stdio.h>
#include<stdlib.h>
int compare (const void * a, const void * b)
{
	  return ( *(int*)a - *(int*)b );
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,m,d;
		scanf("%d%d%d",&n,&m,&d);
		int i;
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		qsort (a, n, sizeof(int), compare);
//		int j,count=0;
//		for(j=0;j<m;j++) {
			int k;
			for(k=n-1;k>=0;k--) {
				if(a[k]>d) {
					if(a[k]%d==0)
						m-=(a[k]/d-1);
					else m-=(a[k]/d);
				}
			}
//		}
		if(m>0)printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
