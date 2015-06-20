#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    while(a!=0 || b!=0) {
        if(a>b){
            printf("0.000000\n");
        }else {
            double x=((double)b-(double)a +1.0)/(double)((double)b+1.0);
            printf("%0.6f\n",x);
        }
        scanf("%d%d",&a,&b);
    }
    return 0;
}
