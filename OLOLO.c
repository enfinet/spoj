#include<stdio.h>
int main()
{
	int t,x=0;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		x=x^n;
	}
	printf("%d\n",x);
	return 0;
}
