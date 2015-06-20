#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c,n,i;
	cin>>n;
	double d,s;
	for ( int i =1; i<=n;i++ ) {
	cin>>a>>b>>c;
	d = (a+b+c)/2.0;
	double t = sqrt(d*(d-a)*(d-b)*(d-c));
	s = ((sqrt(3)*(((a*a)+(b*b)+(c*c)))/4)+(3*t))/2.0;
	printf("%.2f\n",s);
	}
	return 0;
}
