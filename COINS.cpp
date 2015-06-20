#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
map<long long,long long>mp;
long long dp(long long n)
{
    if(n==0ll)return 0ll;
    if(!mp[n]) {
        long long k=max(n,dp(n/2ll)+dp(n/3ll)+dp(n/4ll));
        mp[n]=k;
        return k;
    }
    return mp[n];
}
int main()
{
    long long n;
    while(cin>>n) {
        cout<<dp(n)<<endl;
    }
    return 0;
}

