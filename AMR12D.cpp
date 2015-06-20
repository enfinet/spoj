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
        string s,a;
        cin>>s;
        a=s;
        reverse(s.begin(),s.end());
        if(a==s)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
