#include <map>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

const int MAX = 99998955;
const int LMT = 10000;
const int LEN = 10000000;

int flag[MAX>>6];

#define ifc(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define isc(x) (flag[x>>6]|=(1<<((x>>1)&31)))

void sieve()
{
    int i, j, k;
    for(i = 3; i < LMT; i+=2) {
        if(!ifc(i))
            for(j=i*i, k=i<<1; j < MAX; j+=k)
                isc(j);
    }
    int yy=101;
    printf("2\n");
    for(i=3, j=2; i < MAX && j <= LEN; i+=2) {
        if(!ifc(i)) {
            if(j==yy) {
                printf("%d\n",i);
                yy+=100;
            }
            j++;
        }
    }
}

int main()
{
    sieve();
    return 0;
}

