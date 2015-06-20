#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    long long a,b,sum;
    scanf("%lld%lld%lld",&a,&b,&sum);
     long long n,d;
    n= (long long)( (sum*(long long)2)/ (a+b));
    d=(long long)((b-a)/(long long)(n-(long long)5));
    printf("%lld\n%lld %lld %lld",n,a-2*d,a-d,a);
    long long x=(n-(long long)3);
    while(x--) {
        printf(" %lld",a+d);
        a+=d;
    }
    printf("\n");
    }
    return 0;
}
