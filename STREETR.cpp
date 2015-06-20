#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
	int temp;
	temp = a % b;
	if (temp == 0) return(b);
	else return(gcd(b, temp));
}
int main()
{
	int n,j=0;
	cin>>n;
	long long int s[n];
	long long int t[1000000];
	for ( int i=0;i<n;i++ ) {
		cin>>s[i];
		if( i>=1 ) {
		t[j]=(s[i]-s[i-1]);
		j++;
		}
	}
	long long int d=s[n-1]-s[0];
	sort( t,t+j-1 );
	int v;
	for( v=0;v<j-1;v++ )
		t[v+1]=gcd(t[v],t[v+1]);
	cout<<((d/t[v])-n+1)<<endl;
	return 0;
}
