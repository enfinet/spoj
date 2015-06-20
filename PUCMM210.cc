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
#define mod 1000000003

long long a[1000002];
long long b[1000002];

int main()
{
    long long i=1ll;
    a[i]=1ll;
    b[i]=1ll;
    i++;
    for(;i<1000001ll;i++) {
        a[i]=(a[i-1ll]+(((i*i)%mod)*i)%mod)%mod;
        b[i]=(a[i]+b[i-1ll])%mod;
    }
    int t;
    scanf("%d",&t);
    while(t-- ){
        int n;
        scanf("%d",&n);
        printf("%lld\n",b[n]);
    }
    return 0;
}
