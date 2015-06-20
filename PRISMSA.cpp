#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for( int i=1;i<=t;i++ ) {
		long double h,a,s,v;
		scanf("%LF",&v);
		h=cbrt( (8*v*(sin(acos(-1)/3)))/9 );
		a=sqrt( (2*v)/(h*(sin(acos(-1)/3))) );
		s=((a*a*sin(acos(-1)/3))+(3*a*h));
		printf("%.10LF\n",s);
	}
	return 0;
}
