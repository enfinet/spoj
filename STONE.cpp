#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		double a[100000],b[100000];
		for(int i=0;i<n;i++)
			cin>>a[i]>>b[i];
            	a[n]=a[0];
            	b[n]=b[0];
		double area=0.00;
		for(int j=0;j<n;j++)
			area+=((a[j]*b[j+1])-(a[j+1]*b[j]));
		double c_x,c_y;
		double a_x=0.00,b_y=0.00;
		for(int k=0;k<n;k++) {
			a_x+=((a[k]+a[k+1])*((a[k]*b[k+1])-(a[k+1]*b[k])));
			b_y+=((b[k]+b[k+1])*((a[k]*b[k+1])-(a[k+1]*b[k])));
		}
		c_x=a_x/(double)(area*3);
		c_y=b_y/(double)(area*3);
		printf("%.2f %.2f\n",c_x,c_y);
	}
		return 0;
}

