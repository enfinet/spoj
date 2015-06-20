#include<string>
#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
int main()
{
    int t;
    scanf("%d\n",&t);
    while (t--) {
    char s[1001];
    //cin.getline(s,1001);
    gets(s);
    int i=0;
    int a[100]={0};
    while(s[i]) {
        a[s[i]]++;
        i++;
    }
    int mx=-27,f=0,in=0;
    for(int i=65;i<91;i++) {
        //cout<<i-64<<' '<<(char)i<<' '<<a[i]<<' '<<i-'E'<<endl;
        if(a[i]>mx) {
            mx=a[i];
            in=i;
        }
    }
    for(int i=65;i<91;i++) {
        if(a[i]==mx && in!=i)f=1;
    }
    if(f==0) {
    i=0;
    int x=in-'E';
    if(x<0)x+=26;
    while(s[i]) {
        if(s[i]!=' ')
        s[i]-=x;
        if(s[i]<'A' &&s[i]!=' ')s[i]+=26;
        if(s[i]>'Z')s[i]-=26;
        i++;
    }
    printf("%d %s\n",x,s);
    }else printf("NOT POSSIBLE\n");
    }
    return 0;
}
