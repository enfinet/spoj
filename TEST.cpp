#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
using namespace std;
#define GETCHAR getchar_unlocked
#define PUTCHAR putchar_unlocked

inline int getno()
{
    int n = 0;
    char c;
    while (1)
    {
              c=GETCHAR();
              if(c=='\n'||c==' ') break;
                              n = n * 10 + c - '0';
    }
    return n;
}

inline void putno(int x)
{
     if(x==-1)
     {
              PUTCHAR('-');
              PUTCHAR('1');
              PUTCHAR('\n');
     }
     else
     {
       int i = 10;
       char buf[11];
      // buf[10] = 0;
      buf[10] = '\n';

     do
     {
        buf[--i] = x % 10 + '0';
        x/= 10;
     }while(x);
     do
     {
        PUTCHAR(buf[i]);
     } while (buf[i++] != '\n');
     }
}
int main()
{
    int a;
    a=getno();
    while(a!=42) {
    putno(a);
    a=getno();
    }
    /*int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        while(n--) {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a==1) {
            int x,y;
            if(b%2){
                x=b/2;
                y=x+1;
            }else x=y=b/2;
            if(c==1)printf("%d\n",x);
            else printf("%d\n",y);
        } else {
            int x,y;
            if(b%2){
                x=b/2;
                y=x+1;
            }else x=y=b/2;
            if(c==1)printf("%d\n",y);
            else printf("%d\n",x);
        }
        }
    }*/
    return 0;
}
