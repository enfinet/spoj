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

#define null 0
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

#define nl()        printf("\n");
#define sp()        printf(" ");

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int gcd(int a,int b)
{
    if(!b)return a;
    return gcd(b,a%b);
}

int comdiv(int a)
{
    int count=0;
    for(int i=1; i*i<=a; i++) {
        if(a%i==0)count++;
        if(i != a/i && a%(a/i)==0)count++;
    }
    return count;
}

int main()
{
    int t;
    s(t);
    while(t--) {
        int a,b;
        s(a);
        s(b);
        int gc=gcd(a,b);
        int divs=comdiv(gc);
        p(divs);
        nl();
    }
    return 0;
}
