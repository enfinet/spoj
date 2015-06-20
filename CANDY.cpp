#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n!=-1) {
		int tot=0,a[n],sum=0;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			tot +=a[i];
		}
		if(tot%n==0) {
			int min=tot/n;
			for( int i=1;i<=n;i++ ) {
				if(a[i]>min)
					sum+=(a[i]-min);
			}
			cout<<sum<<endl;
		}else cout<<"-1"<<endl;
		cin>>n;
	}
	return 0;
}
