#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int num;
        scanf("%d",&num);
        int d;
        if(num==1)printf("poor conductor\n");
        else {
            d=(num+4)%5?(num+4)/5:(num+4)/5-1;
            int e=num%10;
            char c1,c2;
            if(e==1||e==2){
                c1='W';
                c2='L';
            }else if(e==3||e==0){
                c1='A';
                c2='L';
            }else if(e==4||e==9){
                c1='A';
                c2='R';
            }else if(e==8||e==5){
                c1='M';
                c2='R';
            }else if(e==7||e==6){
                c1='W';
                c2='R';
            }
            printf("%d %c %c\n",d,c1,c2);
        }
    }
    return 0;
}

