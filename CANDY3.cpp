#include <iostream>
using namespace std;
int main()
{
	long long int t,n,c;
	cin>>t;
	long long int sum;
	for(long long int i=1;i<=t;i++){
		cin>>n;
		sum=0;
		for(long long int j=1;j<=n;j++){
			cin>>c;
			c=c%n;
			sum+=c;
		}
		if( sum%n==0 )
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
