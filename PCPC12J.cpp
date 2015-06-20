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
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,num;
        scanf("%d",&n);
        int a[101]={0};
        for(int i=0;i<n;i++) {
            scanf("%d",&num);
            a[num]++;
        }
        int f=-1,D;
        for(int i=1;i<101;i++) {
            //cout<<a[i]<<" ";
            if(f<a[i] && a[i]%i==0 && a[i]!=0 ) {
                f=a[i];
                D=i;
            }
        }
        //cout<<endl;
        /*for(int i=1;i<101;i++) {
            if(f==a[i] && f%i==0 && a[i]!=0) {
                D=i;
                break;
            }
        }*/
        //cout<<f<<" "<<D<<endl;
        if(f==-1)cout<<"-1"<<endl;
        else cout<<D<<endl;
    }
    return 0;
}
