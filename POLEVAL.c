#include <stdio.h>
int horner(int *c,int s,int x)
{
	int i,r=0;
	for(i=s-1;i>=0;i--)
		r=r*x+c[i];
	return r;
}
int main()
{
	int n,cas=1;
	scanf("%d",&n);
	while(n!= -1) {
	int c[n],k,i;
	for(i=n;i>=0;i--)
		scanf("%d",&c[i]);
	scanf("%d",&k);
	int b[k],j;
	for(j=0;j<k;j++)
                scanf("%d",&b[j]);
	printf("Case %d:\n",cas);
	int l;
	for(l=0;l<k;l++)
		printf("%d\n",horner(c,n+1,b[l]));
	scanf("%d",&n);
	cas++;
	}
	return 0;
}
