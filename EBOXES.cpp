#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int cas;
	cin>>cas; 
	while (cas--) {
		long long n,k,t,f;
		cin>>n>>k>>t>>f;
//		while (t!=1) {
			n+=((k*abs(f-n))/(k-1));
//			t--;
//		}
		cout<<n<<endl;
	}
	return 0;
}
