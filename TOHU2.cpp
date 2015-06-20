#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        char b[101];
        int x;
        for(int i=1;i<=99;i++)
            cin>>x>>b[i];
        int f=0;
        for(int i=18;i<82;i+=9)
            if(b[i]!=b[i-9])
            {
                f=1;
            }
        if(f)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
