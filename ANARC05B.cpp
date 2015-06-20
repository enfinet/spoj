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

int main()
{
    int n;
    scanf("%d",&n);
    while(n) {
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int m;
        scanf("%d",&m);
        int b[m];
        for(int i=0;i<m;i++)
            scanf("%d",&b[i]);
        int ans1=0,ans2=0,ans=0;
        int i=0,j=0;
        while(i<n||j<m) {
            if(i<n && j<m && a[i]<b[j]) {
                while(i<n && j<m && a[i]<b[j]) {
                    ans1+=a[i];
                    i++;
                }
            } else if(i<n && j<m && a[i]>b[j]) {
                while(i<n && j<m && a[i]>b[j]) {
                    ans2+=b[j];
                    j++;
                }
            } else if(i<n && j<m && a[i]==b[j]){
                ans1+=a[i];
                ans2+=b[j];
                i++,j++;
                if(ans1<ans2) ans+=ans2;
                else ans+=ans1;
                ans1=0;
                ans2=0;
            } else break;
            //cout<<ans1<<" "<<ans2<<" "<<ans<<endl;
        }
        //cout<<endl;

        if(i<n) {
            while(i<n)ans1+=a[i++];
        }
        if(j<m) {
            while(j<m)ans2+=b[j++];
        }
        if(ans1<ans2) ans+=ans2;
        else ans+=ans1;

        printf("%d\n",ans);
        scanf("%d",&n);
    }
    return 0;
}
