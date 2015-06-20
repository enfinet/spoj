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

#define MOD 10000007

using namespace std;

long long a[100],b[100];

void bn(long long num,int l)
{
    int x;
    int arr[l];
    int i=0;
    while(l--) {
        if(num%2ll)arr[i++]=6;
        else arr[i++]=5;
        num/=2;
    }
    for(int j=i-1;j>=0;j--)
        printf("%d",arr[j]);
}

void bin(long long num)
{
    int i=1;
    while(num>b[i])i++;
    num-=b[i-1];
    //cout<<b[i]<<" "<<a[i]<<" "<<i<<" "<<num<<endl;
    num-=1ll;
    bn(num,i);
}
int main()
{
    a[0]=0ll,b[0]=0ll;
    a[1]=2ll,b[1]=2ll;
    for(int i=2;i<=54;i++) {
        a[i]=(long long)(a[i-1]*2ll);
        b[i]=(b[i-1]+a[i]);
    }
    int t;
    scanf("%d",&t);
    while(t--) {
        long long n;
        scanf("%lld",&n);
        bin(n);
        printf("\n");
    }
    return 0;
}
