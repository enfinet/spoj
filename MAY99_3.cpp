#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<map>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main()
{
    int n;
    scanf("%d\n",&n);
    while(n--) {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if (c > a && c > b)
            printf("NO\n");
        else if (c == 0)
            printf("YES\n");
        else if (c == a || c == b)
            printf("YES\n");
        else if (c%gcd(a, b) != 0)
            printf("NO\n");
        else    printf("YES\n");
    }
    return 0;
}

