#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[4],x=1;
    while(scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3])!=EOF) {
        int mx=0,i,j;
        for(i=0;i<4;i++)
            for(j=i+1;j<4;j++)
                if(mx<a[i]+a[j])
                mx=a[i]+a[j];
        printf("Case %d: %d\n",x,mx);
        x++;
    }
	return 0;
}
