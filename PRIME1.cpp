#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
long long modulo(long long a,long long b,long long c){
    long long x=1,y=a;
    while(b > 0){
                    if(b%2 == 1){
            x=(x*y)%c;
        }
        y = (y*y)%c;
        b /= 2;
    }
    return x%c;
}
long long mulmod(long long a,long long b,long long c){
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}
bool Miller(long long p,int iteration){
    if(p<2){
        return false;
    }
    if(p!=2 && p%2==0){
        return false;
    }
    long long s=p-1;
    while(s%2==0){
        s/=2;
    }
    for(int i=0;i<iteration;i++){
        long long a=rand()%(p-1)+1,temp=s;
        long long mod=modulo(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1){
            mod=mulmod(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
    long long n1,n2;
               cin>>n1>>n2;
               for(int i=n1;i<=n2;i++) {
    bool x=Miller(i,10);
    if(x== true) cout<<i<<"\n";
    else cout<<"";
    }
    cout<<endl;
    }
    return 0;
}

