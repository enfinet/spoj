#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    while(n||m) {
        int a[n],b[n],x,y;
        for(int i=0;i<n;i++) {
            scanf("%d%d%d%d",&x,&y,&a[i],&b[i]);
            b[i]+=a[i];
        }
        int p,q;
        while(m--) {
            scanf("%d%d",&p,&q);
            q+=p;
            int ans=0;
            for(int i=0;i<n;i++) {
                if(a[i]>=p&&a[i]<q)ans++;
                else if(b[i]>p&&b[i]<=q)ans++;
                else if(a[i]<=p&&b[i]>=q)ans++;
            }
            printf("%d\n",ans);
        }
        scanf("%d%d",&n,&m);
    }
}
