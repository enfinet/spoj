#include <stdio.h>
int rev( int no )
{
	int reverse=0;
        int digit;
        while(no !=0)
        {
                digit=no%10;
                reverse=reverse*10+digit;
                no=no/10;
        }
	return reverse;
}
int main()
{
	int n,n1,n2,i;
	scanf("%d",&n);
	for ( i=1;i<=n;i++ ) {
		scanf("%d%d",&n1,&n2);
		int sum = rev(n1)+rev(n2);
		printf("%d\n",rev(sum));
	}
	return 0;
}
