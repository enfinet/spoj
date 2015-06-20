#include <stdio.h>
int main()
{
	int n,i;
	long	long int b,c,a;
	scanf("%d",&n);
	for( i=1;i<=n;i++ ) {
		scanf("%lld %lld %lld",&a,&b,&c);
		printf("%lld\n",((a*a)-(2*b)));
	}
	return 0;
}
