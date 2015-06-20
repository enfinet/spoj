#include <stdio.h>
#include<iostream>
using namespace std;

/*long long int f(long long int n)
{
	return (n * n + n) / 2;
}
 
long long int calc(long long int h, long long int n)
{
	return f(h - 2 * n - 1) + 2 * f(n);
}*/
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int h;
		scanf("%lld",&h);
//		cout<<min(calc(h, (2 * h - 2) / 6), calc(h, (2 * h - 2 + 5) / 6))<<endl;
		cout <<(h*( h+1 ) /2 )/3<<endl;
	}
	return 0;

}
