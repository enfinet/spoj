#include <cstdio>
#include <algorithm>
#include<cstdlib>
#include<iostream>
#include<cstring>
using namespace std;
long long pas,x,y,k,j,i,t,n,r,l,m,a[100001];
bool find()
{ x=0; pas=1; y=0;
while (y<n-1) { y++;
while (a[y]-a[x]<k&&a[y]!=0) y++;
if (a[y]==0) return 0;
x=y; pas++;
if (pas==m) return 1;
}
return 0;
}
int main()
{ //freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
scanf("%ld",&t);
for (j=0; j<t; j++) {
scanf("%ld %ld",&n,&m);
memset(a,0,sizeof(a));
for (i=0; i<n; i++) scanf("%ld",&a[i]);
sort(a,a+n);
l=0; r=a[n-1];
while (l<r) {
k=(l+r+1)/2;
if (find()) l=k; else r=k-1;
}
printf("%ld\n",l);
}
return 0;
}
