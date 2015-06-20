#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--) {
		int n,x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0;
		cin>>n;
		char s[50];
		cin>>s;
		for(int i=0;i<=37;i++) {
			if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='T')
				x1++;
			else if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='H')
				x2++;
			else if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='T')
				x3++;
			else if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='H')
				x4++;
			else if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='T')
				x5++;
			else if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='H')
				x6++;
			else if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='T')
				x7++;
			else if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='H')
				x8++;
		}
		cout<<n<<" "<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<" "<<x6<<" "<<x7<<" "<<x8<<endl;
	}
	return 0;
}
