#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<map>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int min(int a,int b)
{
    if(a<b)return a;
    else return b;
}

int cnt(int A, int B, int C) {
	int move = 1, a = A, b = 0, pour;
	while(a != C && b != C) {
		pour = min(a, B-b);
		b += pour;
		a -= pour;
		move++;
		if(a == C || b == C) break;
		if(b==B) b = 0, move++;
		else if(a==0) a = A, move++;
	}
	return move;
}
int main()
{
    int n,w;
    scanf("%d%d",&n,&w);
    while(n||w) {
        int a[n],b[100]={0},maxn=-1;
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            if(maxn<a[i])maxn=a[i];
        }
        int maxf=-1,maxw=maxn/w;
        int freq[20]={0};
        for(int i=1;i<=maxw+1;i++) {
            for(int j=0;j<n;j++)
                if(!b[j] && a[j]>=(i-1)*w && a[j]<i*w) {
                    freq[i-1]++;
                    b[j]=1;
                }
            if(maxf<freq[i-1])maxf=freq[i-1];
        }
        int num=maxw;
        double ans=0.0;
        for(int i=0;i<maxw+1;i++) {
            ans+=(double)((double)num*(double)freq[i])/(double)((double)maxf*(double)maxw);
            num--;
        }
        printf("%.6f\n",ans+0.01);
        scanf("%d%d",&n,&w);
    }
    return 0;
}

