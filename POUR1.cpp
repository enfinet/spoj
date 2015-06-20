#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<map>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int min(int a,int b)
{
    if(a<b)return a;
    else return b;
}

int cnt(int A, int B, int C) {
	int move = 1, a = A, b = 0, pour;
	while(a != C && b != C) {
		pour = min(a, B-b);
		b += pour;
		a -= pour;
		move++;
		if(a == C || b == C) break;
		if(b==B) b = 0, move++;
		else if(a==0) a = A, move++;
	}
	return move;
}
int main()
{
    int n;
    scanf("%d\n",&n);
    while(n--) {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if (c > a && c > b)
            printf("-1\n");
        else if (c == 0)
            printf("0\n");
        else if (c == a || c == b)
            printf("1\n");
        else if (c%gcd(a, b) != 0)
            printf("-1\n");
        else {
            printf("%d\n",min(cnt(a,b,c),cnt(b,a,c)));
        }
    }
    return 0;
}

