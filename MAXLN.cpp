#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long n,r;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>r;
		long double x=(4*r*r)+.25;
		printf("Case %d: %.2llf\n",i,x);
	}
	return 0;
}
