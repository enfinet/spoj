#include<stdio.h>
int main()
{
    int a[5000],i=1;
    while((i*(i+1))/2 <= 10000000) {
        a[i]=(i*(i+1))/2;
        i++;
    }
    a[0]=0;
    //printf("%d %d\n",a[i-1],i);
    int t;
    scanf("%d",&t);
    while(t--) {
    int n,x=1;
    scanf("%d",&n);
    while(a[x]<n)x++;
    int sum=a[x-1];
    int num1,num2;
    if(!(x%2)) {
        num1=0,num2=x+1;
        //x--;
        while(sum !=n){
            num1++;
            sum++;
            num2--;
        }
        printf("TERM %d IS %d/%d\n",n,num1,num2);
    }else {
        //x--;
        num1=x+1,num2=0;
        while(sum!=n){
            num1--;
            sum++;
            num2++;
        }
        printf("TERM %d IS %d/%d\n",n,num1,num2);

    }
    }
    return 0;
}
