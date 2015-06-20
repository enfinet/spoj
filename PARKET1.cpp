#include <stdio.h>
#include <cmath>
int main()
{
	int m,n,k=0,i,j;
	scanf("%d%d",&n,&m);
	for( i=3;i<=((m+n)/2);i++ ) {
		for( j=3;j<=(sqrt(m+n));j++ ) {
			if( i*j==(m+n) && 2*((i-1)+(j-1))==n  ) {
				if( i>=j ) {
					printf("%d %d\n",i,j);
					k=1;
					break;
				}
				else {printf("%d %d\n",j,i);
					k=-1;
					break;}
			}
			if( k==1 || k==-1) break;
		}
		if( k==1|| k==-1 ) break;
	}
	return 0;
}
