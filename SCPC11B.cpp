#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<map>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<set>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n) {
        int a[n];
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int f=0;
        for(int i=1;i<n;i++) {
            if(a[i]-a[i-1] >200) {
                f=1;
                break;
            }
        }
        int sum=1422-a[n-1];
        sum*=2;
        if(sum>200)f=1;
        /*if(!f) {
            for(int i=n-1;i>0;i--) {
                if(a[i]-a[i-1] >200) {
                    f=1;
                    break;
                }
            }
        }*/
        if(f)cout<<"IMPOSSIBLE"<<endl;
        else cout<<"POSSIBLE"<<endl;
        scanf("%d",&n);
    }
    return 0;
}
