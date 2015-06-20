#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    string x,y;
    cin>>x;
    while(cin>>y) {
        int a[130]={0};
        int i=0;
        while(x[i]) {
            a[x[i]]++;
            i++;
        }
        i=0;
        string p="";
        while(y[i]) {
            if(a[y[i]]) {
                a[y[i]]--;
                p+=y[i];
            }
            i++;
        }
        sort(p.begin(),p.end());
        cout<<p<<endl;
        cin>>x;
    }
    return 0;
}
