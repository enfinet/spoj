#include <iostream>
using namespace std;
int main()
{
	int d;
	cin>>d;
	for(int i=1;i<=d;i++) {
		long x,y;
		cin>>x>>y;
		long f=x-y,l=(y-1)/2;
		if((f & l)==0 )
			cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}
