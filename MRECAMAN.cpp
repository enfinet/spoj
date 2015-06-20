#include<iostream>
#include<map>
using namespace std;
int main()
{
	map <int,bool> mp1;
	map <int,int> mp2;
	mp1[0]=true;
	mp2[0]=0;
	for(int m=1;m<500001;m++) {
		int x=mp2[m-1]-m;
		if(x>=0 && mp1[x]==false) {
			mp1[x]=true;
			mp2[m]=x;
		} else {
			x=mp2[m-1]+m;
			mp1[x]=true;
			mp2[m]=x;
		}
	}
	int n;
	cin>>n;
	while(n!=-1) {
		cout<<mp2[n]<<endl;
		cin>>n;
	}
	return 0;
}

