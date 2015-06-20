#include <iostream>
using namespace std;
int main()
{
	int a[10],tot=0;
	for(int i =0;i<10;i++) {
		cin>>a[i];
		tot+=a[i];
		if(tot >100) {
			if(tot-100 > 100-tot+a[i]) {
				cout<<tot-a[i]<<endl;
				return 0;
			} else if(tot-100 == 100-tot+a[i]) {
				cout<<tot<<endl;
				return 0;
			}
		} else if(tot==100) { cout<<tot<<endl;return 0;}
	}
	cout<<tot<<endl;
	return 0;
}

