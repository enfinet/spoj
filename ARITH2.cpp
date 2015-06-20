#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for ( int x = 1; x<=n; x++ ) {
	char b[100000],ch;
	int a[100000],i=1,g;
	b[0]='\0';
	while( b[i-1]!= '=' ) {
		cin>>g>>ch;
		a[i]=g;
		b[i]=ch;
		if( b[i-1]=='=' )
		break;
		else
		i++;
	}
	for ( int j = 1; j<=i;j++ ) {
		if ( b[j]!= '=' ) {
		switch(b[j]) {
			case '+': a[j+1]=a[j]+a[j+1];
				break;
			case '*': a[j+1]=a[j]*a[j+1];
				break;
			case '/': a[j+1]=a[j]/a[j+1];
				break;
			default: a[j+1]=a[j]-a[j+1];
		}
		}
		else break;
	}
	cout << a[i-1]<<endl;
	}
	return 0;
}
