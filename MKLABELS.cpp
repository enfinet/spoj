#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int n,i=1;
	cin>>n;
	while( n!=0 ) {
		long long x=pow(n,n-2);
		cout<<"Case "<<i<<", N = "<<n<<", # of different labelings = "<<x<<endl;
		i++;
		cin>>n;
	}
	return 0;
}
