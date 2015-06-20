#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int j,k,p=0,q=0;
    vector < int > b,c ;
    b.resize(n*n*n);
	c.resize(n*n*n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++) {
                b[p++]=a[i]*a[j]+a[k];
                if(a[k])
                    c[q++]=(a[i]+a[j])*a[k];
        }
    c.resize(q);
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    pair < vector <int>::iterator, vector <int>::iterator > bounds;
    long long count=0ll;
    for(int i=0;i<q;i++){
        int temp = 0;
		bounds  = equal_range ( b.begin(), b.end(), c[i] );
		temp = int (bounds.second - b.begin()) - int ( bounds.first - b.begin());
		count += (long long)temp;
    }
    printf("%lld\n",count);
    return 0;
}
