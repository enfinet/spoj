#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    string s;
    int num=1;
    while(cin>>s) {
        int i=0,count=0;
        while(s[i] && s[i]!='1')i++;
        int f=0;
        for(int j=i;s[j];j++) {
            if(!f && s[j]=='1') {
                count++;
                f=1;
            }
            if(f==1 && s[j]=='0') {
                count++;
                f=0;
            }
        }
        printf("Game #%d: %d\n",num,count);
        num++;
    }
    return 0;
}
