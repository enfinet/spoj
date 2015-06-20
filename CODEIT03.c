#include<stdio.h>
int dy(int a,int b,int c)
{
    int ar[]={0,3,2,5,0,3,5,1,4,6,2,4};
    c=c-(b<3);
    return (c+(c/4)-(c/100)+(c/400)+ar[b-1]+a)%7;
}
int main(){
    int  t;
    scanf("%d",&t);
    while(t--) {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int x=dy(a,b,c);
        switch(x){
            case 0:printf("Sunday\n");
                break;
            case 1:printf("Monday\n");
                break;
            case 2:printf("Tuesday\n");
                break;
            case 3:printf("Wednesday\n");
                break;
            case 4:printf("Thursday\n");
                break;
            case 5:printf("Friday\n");
                break;
            case 6:printf("Saturday\n");
                break;
        }
    }
    return 0;
}
