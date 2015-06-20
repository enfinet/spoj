#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	if(((n & (n-1ll) )== 0ll))
		printf("TAK\n");
	else
		printf("NIE\n");
	return 0;
}
