#include <fstream>
#include <cassert>//c headers in c++
#include <cctype>
#include <cfloat>
#include <cmath>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <algorithm>//c++ headers
#include <bitset>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <iomanip>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;

string a[4]={"left","center","right"};
int main()
{
 map<string,int>m;
 m["left"]=0;
 m["center"]=0;
 m["right"]=0;
 char c1[10];
 int n;
      	ifstream ifile("input.txt");
        if(ifile) {
               freopen("input.txt","rt",stdin);
        }
        	 if(ifile) {
                freopen("output.txt","wt",stdout);
          }
 scanf("%s",c1);

 m[c1]=1;
 scanf("%d",&n);
 if(n==10)return 0;
 char c2[10], c3[10];
 while(n--)
 {
 scanf("%s%s",c2,c3);
  int k;
  k=m[c2];
  m[c2]=m[c3];
  m[c3]=k;
 }
 bool f=false;
 string s12;
 for(int i=0;i<3;i++) if(m[a[i]]==1){f=true; s12=a[i];}
 if(f)
       cout<<s12<<"\n";
 return 0;
}
