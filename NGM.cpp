#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%10){
        cout<<"1\n"<<n%10<<endl;
    }else {
        cout<<"2\n";
    }
    return 0;
}
