#include<iostream>
#include<cmath>
using namespace std;
long long sum=0ll;
long long  merge(long long a[],int p,int q,int r)
{
	int m,n;
	m=q-p+1;
	n=r-q;
	long long u[m+1],v[n+1];
	for (int i=1; i<=m; i++)
		u[i]=(long long)a[p+i-1];
	for (int i=1; i<=n; i++)
		v[i]=(long long)a[q+i];
	u[m+1]=10000000ll;
	v[n+1]=10000000ll;
	int i=1,j=1;
//	int in=0;
	sum=0ll;
//	bool cont=false;
	for ( int k=p; k<=r; k++ ) {
/*		if (cont==false && v[j]>u[i]) {
			in+=n-j+1;
			cout<<"in:"<<in<<endl<<"u[i]:"<<u[i]<<endl;
			while(in>0) {
				sum+=((long long)u[i]);
				in--;
			}
//			in=0;
			cont=true;
		}*/
		if (u[i]<v[j]) {
			sum+=(long long)(u[i]*((long long)(n-j+1)));
			a[k]=(long long)u[i];
			i++;
		} else {
			a[k]=(long long)v[j];
			j++;
		}
//		cont=false;
	}
//	cout<<sum<<endl;
	return (long long)sum;
}

long long merge_sort(long long a[],int p,int r)
{
	long long in=0ll;
	if (p<r) {
		int q=floor((p+r)/2);
		in+=(long long)merge_sort(a,p,q);
		in+=(long long)merge_sort(a,q+1,r);
		in+=(long long)merge(a,p,q,r);
	}
	return (long long)in;
}
int main()
{
	int t;
	cin>>t;
	for (int k=1; k<=t; k++) {
		int n;
		cin>>n;
		long long a[n+1];
		for (int i=1; i<=n; i++)
			cin>>a[i];
		int p=1,r=n;
		long long in=(long long)merge_sort(a,p,r);
		cout<<(long long)in<<endl;
		sum=0ll;
	}
	return 0;
}
