#include <iostream>
using namespace std;
int main()
{
	int n,a[1000000];
	cin>>n;
	int i=0;
	a[1]=1;
	for( int i=2;i<=100;i++ )
		a[i]=(i*i)+a[i-1];
	while( n!=0 ) {
		cout<<a[n]<<endl;
		cin>>n;
	}
	return 0;
}
