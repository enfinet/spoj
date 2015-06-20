#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	for( int i=1;i<=t;i++ ) {
	cin>>n;
	unsigned long long x=(unsigned long long)(2+n);
	unsigned long long y=(unsigned long long)(2*n+1);
	unsigned long long z=(unsigned long long)(x*y*n);
	unsigned long long p=(unsigned long long)(z/8);
	unsigned long long q=(unsigned long long)p;
	cout<<q<<endl;
	}
	return 0;
}
