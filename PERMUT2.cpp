#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n) {
        int a[n+1],b[n+1];
        for(int i=1;i<=n;i++) {
            scanf("%d",&a[i]);
            b[a[i]]=i;
        }
        int f=0;
        for(int i=1;i<=n;i++)
            if(a[i]!=b[i]) {
                f=1;
                break;
            }
        if(f)printf("not ambiguous\n");
        else printf("ambiguous\n");
        scanf("%d",&n);
    }
    return 0;
}
