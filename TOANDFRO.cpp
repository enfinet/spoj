#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while (n!=0) {
	char s[250],a[250];
	cin>>s;
	int l=strlen(s);
	int j=0,i=0,m=n*2-1,y=1,x=m,k=0;
	while( x>=1 && y<=m ) {
		while( j<l ) {
			if(k%2==0) {
				if(i%2==0) {
					a[i++]=s[j];
					j+=x;
				} else {
					a[i++]=s[j];
					j+=y;
				}
			}else {
				if(i%2!=0) {
                                	a[i++]=s[j];
                                	j+=x;
                       		} else {
                        	        a[i++]=s[j];
                        	        j+=y;
                        	}
			}
		}
		j=k+1;
		k++;
		x-=2;
		y+=2;
	}
	a[i]='\0';
	cout<<a<<endl;
	cin>>n;
	}
	return 0;
}
