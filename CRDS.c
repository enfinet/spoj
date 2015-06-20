#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
    long long n;
    scanf("%lld",&n);
    long long x;
    if(n%2==0) {
    x= (long long)(((n/2ll)%1000007ll)*((3ll*n+1ll)%1000007ll))%1000007ll;
    }else
    x= (long long)((n%1000007ll)*(((3ll*n+1ll)/2ll)%1000007ll))%1000007ll;
    printf("%lld\n",x);
    }
    return 0;
}
