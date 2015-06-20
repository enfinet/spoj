#include <iostream>
using namespace std;
int f( int a,int b )
{
	if(b==0)return 1;
	int da = a % 10;
	if(da==0)return 0;
	if(da==5)return 5;
	switch(b%4){
		case 0:
		return da%2!=0?1:6;
		case 1:
		return da;
		case 2:
		return da*da%10;
		default:
		return da*da*da%10;
	}
}

int main()
{
	int n,x,y;
	cin>>n;
	for ( int i = 1; i<=n;i++ ) {
		cin>>x>>y;
		int z;
		z = f(x,y);
		cout << z<<endl;
	}
}
