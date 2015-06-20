#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>

#include <iostream>
#include <fstream>
#include <sstream>
#include <istream>
#include <ostream>
#include <iomanip>

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>

#include <bitset>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <utility>

using namespace std;

#define nuint 0
#define MOD 1000000007

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%lld",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%lld",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

#define nl        printf("\n");
#define sp        printf(" ");
typedef long long ll;

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int a[3005];
int b[3005],l=1;
int u[3005];
int arr[3005],var=1;

void seive(int mx)
{
    for(int j=2; j*2<=mx; j++)
                a[2*j]=1;
    for(int i=3; i*i<=mx; i+=2)
        if(!a[i])
            for(int j=i; j*i<=mx; j++)
                a[i*j]=1;
    b[0]=2;
    for(int i=3; i<=mx; i+=2)
        if(!a[i])
            b[l++]=i;
}

void sol()
{
    for(int i=0; i<l; i++)
        for(int j=i+1; j<l; j++)
            for(int k=j+1; k<l; k++)
                if(b[i]*b[j]*b[k]>0 && b[i]*b[j]*b[k]<2700)
                    u[b[i]*b[j]*b[k]]=1;

    for(int j=0; j<2700; j++)
        if(u[j]) {
            for(int i=0; i<l && j*b[i]<2700; i++)
                u[j*b[i]]=1;
            arr[var++]=j;
        }
}

int main()
{
    seive(500);
    sol();
    int t;
    s(t);
    while(t--) {
        int n;
        s(n);
        p(arr[n]);
        nl;
    }
    return 0;
}
