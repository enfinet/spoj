#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int change(string s)
{
	int num=0;
	for(int i=s.length()-1;i>=0;i--)
		num+=((s[i]-48)*pow(10,s.length()-1-i));
	return num;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) {
		string a,b,c;
		char m,n;
		cin>>a>>m>>b>>n>>c;
		int a1,b1,c1;
		a1=a.find("machula");
		b1=b.find("machula");
		c1=c.find("machula");
		int num1,num2,num3;
		if(a1==-1) num1=change(a);
		if(b1==-1) num2=change(b);
		if(c1==-1) num3=change(c);
		if(a1!=-1) cout<<num3-num2<<" "<<m<<" "<<num2<<" "<<n<<" "<<num3<<endl;
		else if(b1!=-1) cout<<num1<<" "<<m<<" "<<num3-num1<<" "<<n<<" "<<num3<<endl;
		else cout<<num1<<" "<<m<<" "<<num2<<" "<<n<<" "<<num2+num1<<endl;
	}
	return 0;
}
