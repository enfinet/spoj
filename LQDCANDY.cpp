#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long a[100];
    a[0]=1ll;
    for(int i=1;i<66;i++)
        a[i]=(long long)(a[i-1]*2ll);
	int t;
	scanf("%d",&t);
	long long num;
	while(t--){
		cin>>num;
		int i=0;
		while(a[i]<num)
            i++;
        if(a[i]==num)cout<<a[i]<<" 0"<<endl;
        else {
            long long b[i],c=a[i];
            int j=0;
            while(c) {
                b[j]=c/2ll;
                c/=2ll;
                j++;
            }
            long long sum=b[0];
            j=1;
            int ans=1;
            while(sum<num) {
                sum+=b[j];
                if(sum>num)sum-=b[j];
                if(sum==num) {
                    ans=j;
                    break;
                }
                j++;
            }
            cout<<a[i]<<" "<<ans+1<<endl;
        }
	}
	return 0;
}
