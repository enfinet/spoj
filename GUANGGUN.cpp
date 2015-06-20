#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    long long n;
    while(cin>>n) {
        /*if(n<=9ll)cout<<n*n<<endl;
        else {
        double x,y=modf((double)n/9.0,&x);*/
        //if(n==9ll)cout<<"81\n";
        //else {
        long long m=(long long)(81ll*((n/9ll))+(n%9ll)*(n%9ll));
        cout<<m<<endl;
        //}
    }
    return 0;
}
