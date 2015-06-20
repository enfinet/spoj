#include<stdio.h>
int a[100000],b[100000];
int main()
{
    int n;
    scanf("%d",&n);
    int count=0,i;
    for(i=0;i<n;i++) {
        int num,m;
        scanf("%d%d",&a[i],&m);
        while(m--) {
            scanf("%d",&num);
            if(!b[num]){
                count++;
                b[num]=1;
            }
        }
    }
    for(i=0;i<n;i++) {
        if(b[a[i]])count--;
    }
    printf("%d\n",count);
    return 0;
}
