#include<iostream>
#include<cmath>
using namespace std;
long long merge(long int a[],int p,int q,int r)
{
	int m,n;
	m=q-p+1;
	n=r-q;
	long int u[m+1],v[n+1];
	for(int i=1;i<=m;i++)
		u[i]=a[p+i-1];
	for(int i=1;i<=n;i++)
                v[i]=a[q+i];
	u[m+1]=100000000;
	v[n+1]=100000000;
	int i=1,j=1;
	long long in=0;
	bool cont=false;
	for( int k=p;k<=r;k++ ) {
		if(cont==false && v[j]<u[i]) {
			in+=m-i+1;
			cont=true;
		}
		if(u[i]<=v[j]) {
			a[k]=u[i];
			i++;
		}else {
			a[k]=v[j];
			j++;
		}
		cont=false;
	}
	return in;
}

long long merge_sort(long int a[],int p,int r)
{
	long long in=0;
	if(p<r) {
		int q=floor((p+r)/2);
		in+=merge_sort(a,p,q);
		in+=merge_sort(a,q+1,r);
		in+=merge(a,p,q,r);
	}
	return in;
}
int main()
{
	int t;
	cin>>t;
	for(int k=1;k<=t;k++) {
		int n;
		cin>>n;
		long int a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int p=1,r=n;
		long long in=merge_sort(a,p,r);
		cout<<in<<endl;
	}
	return 0;
}

