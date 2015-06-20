#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[10001]={0};
    while(k--) {
        int x,y;
        scanf("%d%d",&x,&y);
        if(a[x]&&a[y]){printf("NO\n");return 0;}
        else {a[x]=1;a[y]=1;}
    }
    printf("YES\n");
    return 0;
}
