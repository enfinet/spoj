#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n) {
        n++;
        int m=n*(3*n-1)/2;
        printf("%d\n",m);
        scanf("%d",&n);
    }
    return 0;
}
