#include<iostream>
using namespace std;
int a[2002];
int b[2002][2009];
int dp(int i,int j,int n,int x) {
    if(i>n || j<0 || x>n)return 0;
    if(b[i][j]==0)
        b[i][j]= max(a[i]*x+dp(i+1,j,n,x+1),a[j]*x+dp(i,j-1,n,x+1));
    return b[i][j];
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int mx=dp(1,n,n,1);
    cout<<mx<<endl;
    return 0;
}
