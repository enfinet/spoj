#include<iostream>
#include<cstdlib>
using namespace std;
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
long long modulo(long long a,long long b,long long c){
    long long x=1,y=a;
    while(b > 0){
                    if(b%2 == 1){
            x=mulmod(x,y,c);
        }
        y = mulmod(y,y,c);
        b /= 2;
    }
    return x%c;
}
int Miller(long long p,int iteration){
    if(p<2){
        return -1;
    }
    if(p!=2 && p%2==0){
        return -1;
    }
    long long s=p-1;
    while(s%2==0){
        s/=2;
    }
	int i;
    for(i=0;i<iteration;i++){
        long long a=rand()%(p-1)+1,temp=s;
        long long mod=modulo(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1){
            mod=mulmod(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0){
            return -1;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
    long long n;
               cin>>n;
   	int x=Miller(n,1);
    if(x==1) cout<<"YES\n";
    else cout<<"NO\n";
    }
}
