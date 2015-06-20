#include <iostream>
using namespace std;
int main()
{
	int x=10001,y=10002,z=10003;
	while( (x != 0) || (y != 0) || (z != 0) ) {
		cin>>x>>y>>z;
		if ( (x != 0) || (y != 0) || (z != 0) ) {
		if( (y-x)==(z-y) )
		cout<<"AP "<<(z+(z-y))<<endl;
		else
		cout<<"GP "<<((z*z)/y)<<endl;
		}
	}
	return 0;
}
		
