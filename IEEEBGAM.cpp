#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int num;
        cin>>num;
        int n=num;
        double d=(double)((double)n/((double)n+1.0));
        /*while(n--) {
            d+=((double)num-(double)n)/(double)((double)num*2.0-(double)n);
        }*/
        printf("%0.8f\n",d);
    }
    return 0;
}
