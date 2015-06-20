#include<iostream>
using namespace std;
int main()
{
	char s[11];
	int n;
	cin>>n;
	while(n--) {
		int x=0,o=0;
		for(int j=0;j<9;j++) {
		    cin>>s[j];
			if(s[j]=='X')
				x++;
			else if(s[j]=='O')
				o++;
			else cout<<"";
		}
		if( x==o+1) {
			if((s[0]=='O' && s[1]=='O' && s[2]=='O')||(s[3]=='O' && s[4]=='O'&&s[5]=='O')||(s[6]=='O' && s[7]=='O'&&s[8]=='O'))
				cout<<"no"<<endl;
			else if((s[0]=='O' && s[3]=='O'&&s[6]=='O')||(s[1]=='O' && s[4]=='O'&&s[7]=='O')||(s[2]=='O' && s[5]=='O'&&s[8]=='O'))
				cout<<"no"<<endl;
			else if((s[0]=='O' && s[4]=='O'&&s[8]=='O')||(s[2]=='O' && s[4]=='O'&&s[6]=='O'))
				cout<<"no"<<endl;
            else
				cout<<"yes"<<endl;
		} else if (x==o) {
			if((s[0]=='X' && s[1]=='X' && s[2]=='X')||(s[3]=='X' && s[4]=='X'&&s[5]=='X')||(s[6]=='X' && s[7]=='X'&&s[8]=='X'))
				cout<<"no"<<endl;
			else if((s[0]=='X' && s[3]=='X'&&s[6]=='X')||(s[1]=='X' && s[4]=='X'&&s[7]=='X')||(s[2]=='X' && s[5]=='X'&&s[8]=='X'))
				cout<<"no"<<endl;
			else if((s[0]=='X' && s[4]=='X'&&s[8]=='X')||(s[2]=='X' && s[4]=='X'&&s[6]=='X'))
				cout<<"no"<<endl;
            else cout<<"yes"<<endl;

		} else cout<<"no"<<endl;
	}
	return 0;
}

