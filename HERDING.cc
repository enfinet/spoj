#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>

#include <iostream>
#include <fstream>
#include <sstream>
#include <istream>
#include <ostream>
#include <iomanip>

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>

#include <bitset>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <utility>

using namespace std;

#define null 0
#define MOD 1000000007

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%lld",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%lld",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

typedef long long ll;
#define nl        printf("\n");
#define sp        printf(" ");
#define MAX		1000010

int ls[MAX];
int rnk[MAX];

void create_set(int x)
{
	ls[x]=x;
	rnk[x]=0;
}

int find_set(int x)
{
	if (ls[x]!=x)ls[x]=find_set(ls[x]);
	return ls[x];
}

void merge_set(int x,int y)
{
	int px=find_set(x),py=find_set(y);

	if (rnk[px]>rnk[y])ls[py]=px;
	else ls[px]=py;

	if (rnk[px]==rnk[py])rnk[py]++;
}

#define MX 1010

char a[MX][MX];
int val=1;
int flg[MX][MX];
int n,m;
int mul[MAX];
int flag[MAX];

void input()
{
	scanf("%d%d",&n,&m);
	for (int i=0; i<=n*m; i++)
		create_set(i);
	for (int i=0; i<n; i++)
		scanf("%s",a[i]);
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) {
			flg[i][j]=val++;
		}
}

int main()
{
	input();
	int x,y;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (a[i][j]=='S') {
				x=flg[i][j];
				if (i+1 < n)
					y=flg[i+1][j];
				else y=x;
			} else if (a[i][j]=='W') {
				x=flg[i][j];
				if (j-1 >= 0)
					y=flg[i][j-1];
				else y=x;
			} else if (a[i][j]=='E') {
				x=flg[i][j];
				if (j+1 < m)
					y=flg[i][j+1];
				else y=x;
			} else if (a[i][j]=='N') {
				x=flg[i][j];
				if (i-1 >= 0)
					y=flg[i-1][j];
				else y=x;
			}
			merge_set(x,y);
		}
	}
	int count=0;
	for (int i=1; i<val; i++) {
		int num=find_set(i);
		if (!flag[num]) {
			count++;
			flag[num]=1;
		}
	}
	p(count);
	nl;
	return 0;
}
