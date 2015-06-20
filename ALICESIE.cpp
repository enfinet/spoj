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
        int num;
        scanf("%d",&num);
        cout<<(int)ceil((double)num/2.0)<<endl;
    }
    return 0;
}
