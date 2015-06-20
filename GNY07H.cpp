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
#include<climits>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[]={1, 1, 5, 11, 36, 95, 281, 781, 2245, 6336, 18061, 51205, 145601, 413351, 1174500, 3335651, 9475901, 26915305, 76455961, 217172736, 616891945, 1752296281};
    int i=1;
    while(n--) {
        int num;
        scanf("%d",&num);
        printf("%d %d\n",i,a[num]);
        i++;
    }
    return 0;
}
