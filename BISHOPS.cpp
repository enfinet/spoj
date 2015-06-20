#include<iostream>
#include <cstring>
using namespace std;
int main()
{
	char s[10000];
	while(cin>>s) {
	int l=strlen(s);
	int a[10000],j=l-1;
	for(int i=0;i<l;i++)
		a[j--]=((int)s[i])-48;
	int m=l,tmp=0,index=0;
	int c=m;
	while(c--) {
		int x=a[index]*2+tmp;
		a[index++]=x%10;
		tmp=x/10;
	}
	if(tmp != 0) {
		while(tmp) {
			a[index++]=tmp%10;
			tmp/=10;
			m++;
		}
	}
	if(a[0]==0 && m==1) cout<<"0"<<endl;
	else if(a[0]==2 && m==1) cout<<"1"<<endl;
	else {
	if(a[0]==0) {
		int o=0;
		a[o++]=8;
		while(a[o]==0)
			a[o++]=9;
		if(a[o]==1 && o==m-1)
			index--;
		else
			a[o]-=1;
	} else a[0]-=2;
	int k=index;
	while(k--)
		cout<<a[k];
	cout<<endl;
	}
	}
	return 0;
}
