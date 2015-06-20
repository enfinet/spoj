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

long long C(long long n, long long r)
{
	vector< vector<long long> > C(n+1,vector<long long> (r+1,0));

	for (int i=0; i<=n; i++)
	{
		for (int k=0; k<=r && k<=i; k++)
			if (k==0 || k==i)
				C[i][k] = 1;
			else
				C[i][k] = (C[i-1][k-1] + C[i-1][k])%MOD;
	}
	return C[n][r];
}
int main()
{
	long long n,r;
	scanf("%lld%lld",&n,&r);
	if(n<r)printf("-1\n");
	else {
	    n-=1ll;r-=1ll;
        printf("%lld\n",C(n, r));
	}
    return 0;
}
