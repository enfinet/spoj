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

int main()
{
    int t;
    scanf("%d",&t);
    int cas=1;
    while(t--) {
        int n;
        scanf("%d",&n);
        long long ans=1ll;
        long long cs=0ll,num;
        while(n--) {
            scanf("%lld",&num);
            cs+=num;
            ans=(long long)min(cs,ans);
        }
        if(ans<0ll) {
            ans*=(long long)-1;
            ans+=1ll;
        }
        if(ans==0ll)ans=1ll;
        printf("Scenario #%d: %lld\n",cas,ans);
        cas++;
    }
    return 0;
}
