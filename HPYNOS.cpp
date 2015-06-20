#include<iostream>
using namespace std;
int main()
{
	long x,y;
	cin>>x;
	y=x;
	long sum=y,k=0;
	if(x==7) cout<<"5"<<endl;
	else if(x==1)cout<<"1"<<endl;
	else {
	while(sum>=10) {
		y=sum;
		sum=0;
		while(y!=0) {
			int b=y%10;
			y/=10;
			sum+=(b*b);
		}
		k++;
	}
	if(sum==1)
		cout<<k<<endl;
	else if(sum==7) cout<<k+5<<endl;
	else cout<<"-1"<<endl;
	}
	return 0;
}
