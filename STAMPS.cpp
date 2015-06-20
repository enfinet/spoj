#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
	int n,s,f;
	cin>>n;
	int scn=1;
	for ( int i=1;i<=n;i++ ){
		cin>>s>>f;
		int a[1000000];
	int count=0,i,sum=0;
	for(i=0;i<f;i++) {
		cin>>a[i];
		sum+=a[i];
	}
	int sm=0;
	if( sum>=s ) {
	sort( a,a+i,greater<int>() );
	for( int j=0;j<i;j++ ) {
		sm+=a[j];
		count++;
		if( sm>=s )
		break;
	}
			cout<<"Scenario #"<<scn<<":\n";
			scn++;
			cout<<count<<endl;
	} else {
			cout<<"Scenario #"<<scn<<":\n";
			cout<<"impossible"<<endl;
			scn++;
	}
	}
	return 0;
}
