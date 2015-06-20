#include<iostream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1],b[n+1],c[n+1],d[n+1];
    for(int i=0;i<n;i++)
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    int k=0;
    vector < long > x, y;
	x.resize(n*n);
	y.resize(n*n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) {
            x[k]=a[i]+b[j];
            y[k]=-1*(c[i]+d[j]);
            k++;
        }
    sort(y.begin(),y.end());
    sort(x.begin(),x.end());
    int count=0;
   pair < vector <long>::iterator, vector <long>::iterator > bounds;
    for(int i=0;i<k;i++){
        int temp = 0;
		bounds  = equal_range ( x.begin(), x.end(), y[i] );
		temp = int (bounds.second - x.begin()) - int ( bounds.first - x.begin());
		count += temp;
    }
    printf("%d\n",count);
    return 0;
}
