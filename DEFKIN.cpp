#include<iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int t,w,h,n,x,y,wh,hw;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int v1[45000],v2[45000],max=0;
		scanf("%d%d%d",&w,&h,&n);
		if(n!=0) {
		v1[0]=0;
		v2[0]=0;
		int j;
		for ( j = 1; j <=n; j++ )
			scanf("%d%d",&v1[j],&v2[j]);
		v1[j]=w+1;
		v2[j]=h+1;
		sort(v1+1,v1+n+1);
		sort(v2+1,v2+n+1);
		int m1=0,m2=0;
		for ( int j = 0; j <=n; j++ ){
			wh = v1[j+1] - v1[j]-1;
			if(m1<wh)m1=wh;
			hw= v2[j+1] - v2[j]-1;
			if(m2<hw)m2=hw;
		}
		long long r=(long long) m1*m2;
		printf("%lld\n",r);
		}
		else printf("%d\n",w*h);
	}
	return 0;
}	
