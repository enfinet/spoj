#include<stdio.h>
#define s 10000001
int a[s];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,x,y,max=-1,min=10000003,i;
        scanf("%d",&n);
        int p[n],q[n];
        i=0;
        while(i<n) {
            scanf("%d%d",&p[i],&q[i]);
            if(min>p[i])min=p[i];
            if(max<q[i])max=q[i];
            i++;
        }
        for(i=min;i<=max;i++)
            a[i]=0;
        i=0;
        while(i<n){
            a[p[i]]++;
            a[q[i]+1]--;
            i++;
        }
        int sum=a[min];
        for(i=min+1;i<=max;i++) {
            a[i]=a[i]+a[i-1];
            if(sum<a[i])sum=a[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
