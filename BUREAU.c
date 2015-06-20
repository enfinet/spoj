#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d\n",&n);
        int a[100001]={0},b[100001];
        char str[100001],string[10];
        int i;
        char s[10];
        for(i=1;i<=n;i++) {
            scanf("%s",string);
            str[i]=string[0];
            //printf("%c_\n",str[i]);
            if(str[i]=='c')
                scanf("%d",&b[i]);
        }
        int count=n;
        for(i=n;i>=1;i--) {
            //printf("%c_%d\n",str[0],a[i]);
            if(str[i]=='c' && !a[i]) {
                a[b[i]]=1;
            }
	    if(a[i])
            count--;
        }
        printf("%d\n",count);
        for(i=1;i<=n;i++) {
            if(!a[i])
                printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
