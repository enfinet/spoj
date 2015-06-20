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
    int t;
    scanf("%d",&t);
    int cas=1;
    while(t--) {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[10005]={0},b[10005];
        int f=0,num1,num2,i=0;
        while(k--) {
            scanf("%d%d",&num1,&b[i]);
            a[num1]=1;
            i++;
        }
        for(int j=0;j<i;j++)
            if(a[b[j]]==1){
                f=1;
                break;
            }
        if(f)printf("Scenario #%d: spied\n",cas);
        else printf("Scenario #%d: spying\n",cas);
        cas++;
    }
    return 0;
}
