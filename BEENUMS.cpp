#include<iostream>
using namespace std;
main()
{
        long long unsigned int n=0;
        while((cin>>n) && (n!=-1))
        {
                if(n!=-1)
                {
			long long unsigned int x=1,i=1;
                        while(x<n)
                        {
                                x=x+(6*i);
                                i++;
                        }
                        if(x==n)
                        cout<<"Y ";
                        else
                        cout<<"N ";
                }
        }
}
