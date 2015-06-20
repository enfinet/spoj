#include<stdio.h>
int main()
{
    int a[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864};
    char g[10];
    scanf("%s",g);
    while(g[0]!='0'||g[1]!='0') {
        int r=g[1]-48;
        int n=((g[0]-48)*10)+r;
        int t=g[3]-48;
        int e=1;
        while(t--)e*=10;
        n*=e;
        int i=1;
        while(n>a[i])i++;
        if(n==a[i])printf("1\n");
        else {
        int x=n^a[i-1];
        printf("%d\n",2*x+1);
        }
        scanf("%s",g);
    }
    return 0;
}
