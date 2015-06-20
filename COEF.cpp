#include<iostream>
using namespace std;
int fact(int k)
{
	if(k==1 || k==0) return 1;
	else return fact(k-1)*k;
}
int main()
{
	int n,k;
	while(cin>>n>>k) {
		int x=1,y;
		while(k--) {
			cin>>y;
			x*=fact(y);
		}
		cout<<fact(n)/x<<endl;
	}
	return 0;
}
