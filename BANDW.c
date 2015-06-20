#include<stdio.h>
int main()
{
	char a[510],b[510];
	scanf("%s %s",a,b);
	while(a[0]!='*') {
	int i=0,cnt=0;
	while(a[i]) {
		if(a[i]!=b[i])
			cnt++;
		while(a[i]!=b[i] && a[i])i++;
		while(a[i]==b[i] && a[i])i++;
	}
	printf("%d\n",cnt);
	scanf("%s %s",a,b);
	}
	return 0;
}
