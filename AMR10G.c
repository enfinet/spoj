#include<stdio.h>
#include<stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),compare);
        int min=1000000001,j;
        for(i=0,j=k-1;i<n&&j<n;i++,j++)
            if(min>a[j]-a[i])min=a[j]-a[i];
        printf("%d\n",min);
    }
    return 0;
}
