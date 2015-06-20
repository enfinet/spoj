#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n;
	cin>>n;
	multimap < int,int > my;
	long long sum=0ll;
	int x=0;
	while(n--) {
		int num;
		cin>>num;
		int data;
		for(int i=0;i<num;i++) {
			cin>>data;
			my.insert(pair <int,int >(data,x++));
		}
		multimap < int,int > :: iterator it1=my.begin();
		multimap < int,int > :: iterator it2=my.end();
		it2--;
//		cout<<it1->first<<" "<<it2->first<<endl;
		sum+=(long long)(((long long)(it2->first))-((long long)(it1->first)));
		my.erase(it1);
		my.erase(it2);
	}
	cout<<sum<<endl;
	return 0;
}
