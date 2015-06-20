#include<iostream>
#include<cmath>
using namespace std;
main()
{
      int i,n,z=0;
      cin>>i;
      n=sqrt(i);
     for(int x=1;x<=n;x++)
     {
                      for(int j=x;(x*j)<=i;j++)
                      z++;
     }
      cout<<z;
}
