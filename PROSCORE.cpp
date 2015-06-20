#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t,y=1;
    scanf("%d",&t);
    while(t--) {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[15][15];
        int b[15]={0},c[15]={0};
        int f1=1,f2=1,f3=1;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                scanf("%d",&a[i][j]);
                b[i]+=a[i][j];
            }
            if(!b[i])f2=0;
            if(b[i]==m)f3=0;
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++)
                c[i]+=a[j][i];
            if(!c[i]) {
                f1=0;
                break;
            }
        }
        int num=1*f3+2*f2+4*f1;
        printf("Case %d: %d\n",y,num);
        y++;
    }
    return 0;
}
