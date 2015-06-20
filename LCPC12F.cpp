#include<iostream>
#include<cstdio>
#include<map>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int y=1;
    while(t--) {
        int x,n;
        scanf("%d%d",&x,&n);
        int a[n];
        int b[100001]={0};
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        long long count=0ll;
        b[a[0]]++;
        for(int i=1;i<n;i++) {
            int u=(int)abs(x-a[i]);
            if(u+a[i]==x)
            count+=(long long)b[u];
            b[a[i]]++;
        }
        printf("%d. %lld\n",y,count);
        y++;
    }
    return 0;
}
