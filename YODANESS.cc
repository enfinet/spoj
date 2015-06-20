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

#define max 30001

int read_bit(vector < int >& tree,int idx)
{
    int sum=0;
    while(idx && idx<max) {
        sum += tree[idx];
        idx += (idx & -idx);
    }
    return sum;
}

void update_bit(vector < int >& tree,int val)
{
    int idx=val;
    while(idx>0) {
        tree[idx]++;
        idx -= (idx & -idx);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        vector <int> tree(max);
        int n;
        scanf("%d\n",&n);
        map< string,int > mp1;
        int j=1;
        string s;
        for(int i=0;i<n;i++) {
            cin>>s;
            mp1[s]=j;
            j++;
        }
        scanf("\n");
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>s;
            a[i]=mp1[s];
        }
        int num;
        int sum=0;
        for(int i=0;i<n;i++) {
            num=a[i];
            sum+=read_bit(tree,num);
            update_bit(tree,num);
        }
        printf("%d\n",sum);
    }
    return 0;
}
