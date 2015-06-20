#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int n,l,x;
	cin>>x;
	for ( long long int i = 1; i<=x;i++ ) {
	cin>>n;
	if( n==0 || n==1 )
	cout<<"1"<<endl;
	else {
	l = (floor((log(2*(acos(-1))*n)/2+n*(log(n)-1))/log(10))+1);
	cout << l<<endl;
	}
	}
	return 0;
}
