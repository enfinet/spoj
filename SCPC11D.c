#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    while(a&&b&&c) {
        int flag=0;
        if(a*a+b*b == c*c)
            flag=1;
        else if(a*a+c*c == b*b)
            flag=1;
        else if(b*b+c*c == a*a)
            flag=1;
        if(flag)printf("right\n");
        else printf("wrong\n");
        scanf("%d%d%d",&a,&b,&c);
    }
    return 0;
}
