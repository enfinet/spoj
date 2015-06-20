#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	while(x!= -1) {
	if(x==0 && y==0) printf("0\n");
	else if(x>y) {
		int u=(x+y)/(y+1);
		printf("%d\n",u);
	}else {
		int j=(x+y)/(x+1);
		printf("%d\n",j);
	}
	scanf("%d%d",&x,&y);
	}
	return 0;
}
