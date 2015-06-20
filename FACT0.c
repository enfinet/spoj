 #include<stdio.h>
 long long a[100000];
 int b[100000];
int main()
{
	long long n;
    scanf("%lld",&n);
	while(n) {
	long long i=2ll;
	int count,t=0;
       for(i=2ll;i*i<=n;i++)
       {
           count=0;
         while(n % i == 0ll)
         {
             count++;
           //printf("%d",i);
           n /= i;
         }
         if(count){
             a[t]=i;
             b[t]=count;
             t++;
         }
       }
	if (n > 1){
	     a[t]=n;
        b[t]=1;
        t++;
	}
	int y;
    for(y=0;y<t;y++) {
        printf("%lld^%d ",a[y],b[y]);
    }
    printf("\n");
	scanf("%lld",&n);
	}
	return 0;
}
