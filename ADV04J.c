#include<stdio.h>
int main()
{
    int a[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576};
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int i=1;
        while(n>a[i])i++;
        printf("%d\n",i+1);
    }
    return 0;
}
