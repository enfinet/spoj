#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int p=1;p<=t;p++) {
	int fact,a[500];
	cin>>fact;
	if(fact==0) cout<<"1"<<endl;
	else {
	int num=1;
	a[0]=1;
	int m=1,index,z=1;
	while(num<=fact) {
	int temp=0,x;
	index=0;
	m=1;
	while(z) {
		x=a[index]*num+temp;
		a[index++]=x%10;
		temp=x/10;
		z--;
		m++;
	}
	while(temp) {
		a[index++]=temp%10;
		temp/=10;
		m++;
	}
	z=m-1;
	num++;
	}
	int l=index-1;
	while(l>=0)
		cout<<a[l--];
	cout<<endl;
	}
	}
	return 0;
}
