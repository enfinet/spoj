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

long long read_bit(long long tree[],long long idx)
{
    idx--;
    long long sum=0ll;
    while(idx>0ll) {
        sum += tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

void update_bit(long long tree[],long long val)
{
    long long idx=val;
    while(idx && idx<1000001) {
        tree[idx] += val;
        idx += (idx & -idx);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        long long tree[1000001]={0ll};
        int n;
        scanf("%d",&n);
        long long num;
        long long sum=0ll;
        for(int i=0;i<n;i++) {
            scanf("%lld",&num);
            sum+=read_bit(tree,num);
            update_bit(tree,num);
        }
        printf("%lld\n",sum);
    }
    return 0;
}

