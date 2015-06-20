#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	while(x&&y) {
		int i,z=1;
		for(i=1;i<=x;i++) {
			z=((z+y)%i);
		}
		printf("%d %d %d\n",x,y,z+1);
		scanf("%d%d",&x,&y);
	}
	return 0;
}
