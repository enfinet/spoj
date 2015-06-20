#include <stdio.h>
void mul(int u,int v,int w)
{
	int b[5];
	b[0]=u;
	b[1]=v;
	b[2]=w;
	int a[50];
	a[0]=1;
	int m=1,index,z=1;
	int p;
	for(p=0;p<3;p++) {
	int temp=0,x;
	index=0;
	m=1;
	while(z) {
		x=a[index]*b[p]+temp;
		a[index++]=x%10;
		temp=x/10;
		z--;
		m++;
	}
	while(temp) {
		a[index++]=temp%10;
		temp/=10;
		m++;
	}
	z=m-1;
	}
	int l=index-1;
	while(l>=0)
		printf("%d",a[l--]);
	printf("\n");
}
int main()
{
	int t;
	scanf("%d",&t);
	int p;
	for(p=1;p<=t;p++) {
	int n;
	scanf("%d",&n);
	int a=n,b=n+1,c=n+2;
	if(a%2==0)a/=2;
	else b/=2;
	mul(a,b,c);
	}
	return 0;
}
