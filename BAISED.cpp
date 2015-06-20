#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		char s[10000];
		int a[150000],i=0,g;
		long long sum=0,q=x;
		while(q--) {
			cin>>s>>g;
			a[i++]=g-1;
		}
		sort(a,a+x);
		int p=x,y=0;
		while(p--) {
			sum+=abs(a[y]-y);
/*			if(a[y]>=y)
				sum+=a[y]-y;
			else 
				sum+=y-a[y];*/
			y++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
