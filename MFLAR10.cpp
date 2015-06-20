#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char ch;
	int x;
	x=ch=getchar();
	if(x<=90) x+=32;
	while(ch!='*') {
	char s[1100];
	int i=0,cnt=0,count=1;
	s[i]=ch;
	while(s[i]!='\n') {
		if(s[i]==' ') {
			i++;
			cnt++;
			s[i]=getchar();
			int z=s[i];
			if(s[i]<=90) z+=32;
			if(z==x)
				count++;
		} else {
			i++;
			s[i]=getchar();
		}
	}
	if(count==cnt+1)
		cout<<"Y"<<endl;
	else cout<<"N"<<endl;
	ch=getchar();
	x=ch;
	if(x<=90)x+=32;
	}
	return 0;
}
