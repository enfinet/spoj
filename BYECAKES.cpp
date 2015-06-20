#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int p,q,r,s,t,u,v,w;
	cin>>p>>q>>r>>s>>t>>u>>v>>w;
	while(p!=-1) {
		double max=(double)p/t,z;
		if(max<=q/u){max=(double)q/u;}
		if(max<=r/v){max=(double)r/v;}
		if(max<=s/w){max=(double)s/w;}
		z=ceil(max);
		int m=p-z*t,n=q-z*u,o=r-z*v,e=s-z*w;
		if(m<0) m*=(-1);
		if(n<0) n*=(-1);
		if(o<0) o*=(-1);
		if(e<0) e*=(-1);
		cout<<m<<" "<<n<<" "<<o<<" "<<e<<endl;
		cin>>p>>q>>r>>s>>t>>u>>v>>w;
	}
	return 0;
}
