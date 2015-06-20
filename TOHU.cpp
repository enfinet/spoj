#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
int n;
cin>>n;
double x=1.0/(6.0+2.0*(n-1.0))-(1.0/(4.0+2.0*(n-1.0)))+0.75;
printf("%0.11f\n",x);
    }
return 0;
}
