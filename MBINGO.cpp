#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    while(n||m) {
        int a[10000]={0};
        int b[m];
        for(int i=0;i<m;i++)
            scanf("%d",&b[i]);
        sort(b,b+m);
        for(int i=1;i<m;i++)
            for(int j=i-1;j>=0;j--)
                a[b[i]-b[j]]=1;
        int f=0;
        for(int i=1;i<=n;i++)
            if(!a[i]) {
                f=1;
                break;
            }
        if(f)printf("N\n");
        else printf("Y\n");
        scanf("%d%d",&n,&m);
    }
}
