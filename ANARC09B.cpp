#include<iostream>
using namespace std;
long long int gcd(long long int a,long long int b)
{
	if(b == 0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	long long int x,y;
	cin>>x>>y;
	while(x!=0 && y!=0) {
		long long z=(long long)gcd(x,y);
		long long r=(long long)x*y;
		long long t=(long long)z*z;
		long long e=(long long)r/t;
		cout<<e<<endl;
		cin>>x>>y;
	}
	return 0;
}
