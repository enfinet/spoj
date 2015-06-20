#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>
using namespace std;
#define mod 1000000007

long long pow(long long a,long long b)
{
    if(b==0ll)return 1ll;
    else {
        long long num=pow(a,b/2ll)%mod;
        if(b%2ll) return ((a%mod)*(((num%mod)*(num%mod))%mod))%mod;
        else return ((num%mod)*(num%mod))%mod;
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t-- ){
        long long n;
        scanf("%lld",&n);
        if(n==1ll)printf("1\n");
        else {
        long long ans=0ll;
        if(n%3ll==0ll) {
            n/=3ll;
            ans=pow(3ll,n);
        }else if(n%3ll==2ll) {
            n-=2ll;
            n/=3ll;
            ans=pow(3ll,n);
            ans=(ans*2ll)%mod;
        } else {
            n--;
            n/=3ll;
            ans=pow(3ll,n-1ll);
            ans=(ans*4ll)%mod;
        }
        printf("%lld\n",ans);
        }
    }
    return 0;
}

