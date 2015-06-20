#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	while(n!=0 && t!=0) {
		map<string,int> m;
		int k=1,l=n;
		string s;
		while(l--) {
			cin>>s;
			map<string,int> :: iterator p;
			p=m.find(s);
			if(p!=m.end())
				m.insert(pair<string,int>(s,(p->second)++));
			m.insert(pair<string,int>(s,k));
		}
		int a[n+1];
		for(int j=0;j<=n;j++)
			a[j]=0;
		map<string,int> :: iterator it;
		for(it=m.begin();it!=m.end();it++) {
			a[it->second]++;
		}
		for(int i=1;i<=n;i++)
			cout<<a[i]<<endl;
		cin>>n>>t;
	}
	return 0;
}
