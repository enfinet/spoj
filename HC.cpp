#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--) {
	int n;
	cin>>n;
	string s,a;
	cin>>s;
	n--;
	while(n--) {
	if(s=="hhb") {
			cin>>a;
			if(a=="hhb")
				s="hhb";
			else s="lxh";
	}else {
			cin>>a;
			if(a=="hhb")
				s="lxh";
			else s="hhb";
	}
	}
	cout<<s<<endl;
	}
	return 0;
}
