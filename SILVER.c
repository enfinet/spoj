#include<stdio.h>
int main()
{
	int a[20]={2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768};
	int t;
	scanf("%d",&t);
	while(t){
		int i=0;
		while(t>=a[i])i++;
		printf("%d\n",i);
		scanf("%d",&t);
	}
	return 0;
}
