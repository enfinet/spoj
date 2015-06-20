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
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    while(x||y||z) {
        int ans=(int)abs(x-z);
        if(ans%y)
            printf("No accounting tablet\n");
        else {
            ans/=y;
            int count=ans/3;
            ans%=3;
            count+=ans/2;
            ans%=2;
            count+=ans;
            printf("%d\n",count);
        }
        scanf("%d%d%d",&x,&y,&z);
    }
    return 0;
}
