#include<iostream>
#include<cstdio>
#include<map>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int m,n,k;
        scanf("%d%d%d",&m,&n,&k);
        string a[m];
        for(int i=0;i<m;i++)
                cin>>a[i];
        int b[51]={0};
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(a[i][j]=='*')b[i]++;
        while(k--) {
            sort(b,b+m);
            b[0]=n-b[0];
        }
        int count=0;
        for(int i=0;i<m;i++)
            count+=b[i];
        printf("%d\n",count);
    }
    return 0;
}
