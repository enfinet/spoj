#include <stdio.h>
int main()
{
	long int t;
	int n,b,i;
	scanf("%ld",&t);
	for ( i=1;i<=t;i++ ) {
		scanf("%d%d",&n,&b);
		if( b==0 )
		printf("Airborne wins.\n");
		else printf("Pagfloyd wins.\n");
	}
	return 0;
}
