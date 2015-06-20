#include<stdio.h>
#include<stdlib.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int i=0;
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),compare);
    int count=0,j;
    for(i=0;i<n;i++) {
        for(j=i+1;a[j]-a[i]<=k;j++) {
            if(a[j]-a[i]==k)count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
