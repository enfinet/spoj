#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) {
		int a,b,tot=0,p,q,t=0;
		cin>>a>>b;
		int max1=0,max2=0;
		for(int x=1;x<=a;x++) {
			cin>>p;
			if(max1<p) max1=p;
		}
		for(int y=1;y<=b;y++) {
			cin>>q;
			if(max2<q) max2=q;
		}
		if(max1>=max2)
			cout<<"Godzilla"<<endl;
		else cout<<"MechaGodzilla"<<endl;
	}
	return 0;
}

