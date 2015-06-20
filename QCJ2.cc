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
#define MOD 761238923ll


long long C(int n, int r)
{
	vector< vector<long long> > C(n+1,vector<long long> (r+1,0ll));

	for (int i=0; i<=n; i++)
	{
		for (int k=0; k<=r && k<=i; k++)
			if (k==0 || k==i)
				C[i][k] = 1ll;
			else
				C[i][k] = (long long)(C[i-1][k-1]%MOD + C[i-1][k]%MOD)%MOD;
	}
	return (long long)C[n][r]%MOD;
}

int main()
{
    int t;
    cin>>t;
    while(t) {
        long long ans=(long long)(((long long)C(2*t,t)%MOD-(long long)C(2*t,t-1)%MOD)+MOD)%MOD;
        cout<<ans<<endl;
        cin>>t;
    }
    return 0;
}

