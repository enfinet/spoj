#include<stdio.h>
#include<math.h>
int gcd(unsigned int m,unsigned int  n)
{
	if (n==0)
		return m;
	else
		return (n>m?gcd(n,m):gcd(n,m%n));
}

int main()
{
	int t,x,y,m,n,k1,k2;
	unsigned int p,q;
	scanf("%d",&t);
	while (t--) {
		scanf("%d %d",&m,&n);
		p=abs(m);
		q=abs(n);
/*		if (m>0 && n<0)
		{
			p=m;
			q=-1 * n;
		}
		else if (m<0 && n>0)
		{
			p=-1*m;
			q=n;
		}
		else if(m<0 && n<0)
		{
			p=-1*m;
			q=-1*n;
		}else {
			p=m;
			q=n;
		}*/

//		if (m==0 || n==0) break;
		y=gcd(p,q);
		k1=m/y;
		k2=n/y;

		if ((k1>0 && k2>0) || (k1<0 && k2<0))
//		if(k1>=k2)
		{
			if ( k1>k2 )
				x=k1-k2;
			else
				x=k2-k1;
		}
		else if (k1>0 && k2<0)
			x=k1-k2;
		else if (k1<0 && k2>0) {
			x=k2-k1;
		}

		printf("%d\n",x);
	}
	return 0;
}
