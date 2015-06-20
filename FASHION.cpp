#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	for (int i=1;i<=n;i++) {
		cin>>a;
		int p[1000],q[1000];
		for(int x=0;x<a;x++)
			cin>>p[x];
		sort(p,p+a);
		for(int y=0;y<a;y++)
			cin>>q[y];
		sort(q,q+a);
		int tot=0;
		for(int i=0;i<a;i++)
			tot+=(p[i]*q[i]);
		cout<<tot<<endl;
	}
	return 0;
}
