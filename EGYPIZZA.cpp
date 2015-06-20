#include<iostream>
#include<cmath>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    if(n) {
    int a=0,b=0,c=0;
    string s;
    for(int i=0;i<n;i++) {
        cin>>s;
        if(s[2]=='2')a++;
        else if(s[0]=='1'&& s[2]=='4')b++;
        else c++;
    }
    int sum=0;
    if(a%2) {
        sum+=a/2;
        a=1;
    }else {
        sum+=a/2;
        a=0;
    }

    if(c>=b) {
        sum+=b;
        c-=b;
        sum+=c;
        if(a==1)
            sum++;
    }else {
        sum+=c;
        b-=c;
        if(b<=2 && b>0 && a==1)sum++;
        else {
            if(a==1) {
                sum++;
                b-=2;
            }
            if(b%4)
                sum+=b/4+1;
            else sum+=b/4;
        }
    }
    cout<<sum+1<<endl;
    }else cout<<"1"<<endl;
    return 0;
}
