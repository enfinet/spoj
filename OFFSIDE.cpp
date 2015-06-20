#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int B,C;
	cin>>B>>C;
	while(B!=0 && C!=0) {
		int a[B],b[C];
		for(int i=0;i<B;i++)
			cin>>a[i];
		for(int j=0;j<C;j++)
			cin>>b[j];
		sort(a,a+B);
		sort(b,b+C);
		if(a[0]<b[1])
			cout<<"Y\n";
		else cout<<"N\n";
		cin>>B>>C;
	}
	return 0;
}

