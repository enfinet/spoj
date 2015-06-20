#include<stdio.h>

int min(int a,int b)
{
    if(a<b)return a;
    else return b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int a[n][3],i,j;
        for(i=0;i<n;i++)
            for(j=0;j<3;j++)
                scanf("%d",&a[i][j]);
        for(i=1;i<n;i++)
            for(j=0;j<3;j++) {
                if(j==0)
                    a[i][j]+=min(a[i-1][j+1],a[i-1][j+2]);
                if(j==1)
                    a[i][j]+=min(a[i-1][j-1],a[i-1][j+1]);
                if(j==2)
                    a[i][j]+=min(a[i-1][j-1],a[i-1][j-2]);
            }
        int min=a[n-1][0];
        if(min>a[n-1][1])min=a[n-1][1];
        if(min>a[n-1][2])min=a[n-1][2];
        printf("%d\n",min);
    }
    return 0;
}
