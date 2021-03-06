#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;

int match(string a,string b)
{
    int i=0;
    int l1=a.length(),l2=b.length();
    if(l1<l2)return 0;
    int f=1;
    while(b[i]) {
        if(b[i]!=a[i]){
            f=0;break;
        }
        i++;
    }
    return f;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        map<string ,int>mp;
        int f=0;
        string s;
        while(n--)
        {
            cin>>s;
            if(mp[s])f=1;
            else mp[s]++;
        }
        if(!f) {
            map<string ,int> :: iterator it=mp.begin();
            string a=it->first;
            it++;
            while(it!=mp.end()) {
                if(match(it->first,a)) {
                    f=1;
                    break;
                }
                a=it->first;
                it++;
            }
        }
        if(f)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
