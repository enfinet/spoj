#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[200000],b[200000],m[200000],n[200000];
	cin>>a>>b;
	while(a[0]!='*'){
	int a1=strlen(a),i=0,j=0;
	int f=0;
	while(i<a1){
		if(f==0){
			while(a[i]=='0')
				i++;
			f=1;
		}else{
			m[j++]=a[i++];
		}
	}int a2=strlen(b),p=0,q=0;
	int flag=0;
	while(p<a2) {
		if(flag==0) {
			while(b[p]=='0')
				p++;
			flag=1;
		} else {
			n[q++]=b[p++];
		}
	}
	m[j]='\0';
	n[q]='\0';
	int l1=strlen(m);
	int l2=strlen(n);
	if(l1>l2) cout<<">"<<endl;
	else if(l1<l2) cout<<"<"<<endl;
	else {
	int x=strcmp(m,n);
	if(x>0)
		cout<<">"<<endl;
	else if(x<0)
		cout<<"<"<<endl;
	else cout<<"="<<endl;
	}
	cin>>a>>b;
	}
	return 0;
}
