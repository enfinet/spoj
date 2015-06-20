#include<stdio.h>
int main()
{
    int i;
    long long a[32];
    a[1]=3ll;a[2]=9ll;
    for(i=3;i<31;i++) {
        a[i]=2ll*a[i-1]+a[i-2];
    }
    int t;
    scanf("%d",&t);
    while(t--) {
    int n;
    scanf("%d",&n);
    printf("%lld\n",a[n]);
    }
    return 0;
}
