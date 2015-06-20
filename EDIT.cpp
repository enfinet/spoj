#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    char s[1005];
    while(scanf("%s",s)!=EOF) {
        char a[1005],b[1005],ch;
        int i=0;
        int count1=0,count2=0;
        while(s[i]) {
            ch=s[i];
            if(ch>=65 && ch<=91)ch+=32;
            if(i%2==0){
                a[i]=ch;
                b[i]=ch-32;
            }else {
                a[i]=ch-32;
                b[i]=ch;
            }
            if(s[i]!=a[i])count1++;
            if(s[i]!=b[i])count2++;
            i++;
        }
        if(count1<count2)cout<<count1<<endl;
        else cout<<count2<<endl;
    }
    return 0;
}
