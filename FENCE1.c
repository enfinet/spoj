#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0) {
		double x=((n*n)/(2*acos(-1.0)));
		printf("%.2f\n",x);
		scanf("%d",&n);
	}
	return 0;
}
