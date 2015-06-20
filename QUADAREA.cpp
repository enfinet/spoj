#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
        double a,b,c,d,s,area;
        int i,n;
        cin>>n;
        for(i=0;i<n;i++)
        {
                cin>>a>>b>>c>>d;
                s=(a+b+c+d)/2.0;
                area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
                printf("%.2f",area);
                printf("\n");
        }
        return 0;
}
