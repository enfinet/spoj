#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    while(n--) {
        int a[30010],b[30010]={0};
        char s[30010];
        //gets(s);
        scanf(" %[^\r\n]",s);
        int i=0,j=0;
        int l=strlen(s),len=0;
        while(i<l) {
            if(s[i]==' '||s[i]=='\r'||s[i]=='\t'||s[i]=='\n') {
                if(len) {
                    a[j++]=len;
                    len=0;
                }
            }else len++;
            i++;
        }
        a[j++]=len;
        int k=0;
        b[0]=1;
        for(int i=0;i<j-1;i++) {
            if(a[i]==a[i+1]){
                b[k]++;
            }else {
                k++;
                b[k]++;
            }
        }
        int max=-1;
        for(int i=0;i<=k;i++)
            if(max<b[i])max=b[i];
        printf("%d\n",max);
    }
    return 0;
}

