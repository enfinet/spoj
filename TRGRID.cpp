#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a%2) {
            if(b>=a) {
                printf("R\n");
            }else {
                if(b%2)
                    printf("D\n");
                else printf("U\n");
            }
        } else {
            if(b>=a) {
                printf("L\n");
            }else {
                if(b%2)
                    printf("D\n");
                else printf("U\n");
            }
        }
    }
    return 0;
}
