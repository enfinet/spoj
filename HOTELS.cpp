#include<iostream>
using namespace std;
int max(int a[], int size,int m)
{
   int max_so_far = 0, max_ending_here = 0;
   int i,j=0;
   for(i = 0; i < size; i++)
   {
     max_ending_here = max_ending_here + a[i];
     if(max_ending_here>m) {
         while(max_ending_here>m && j<=i) {
            max_ending_here -=a[j];
            j++;
         }
         //max_ending_here = max_ending_here + a[i];
     }

     /* Do not compare for all elements. Compare only
        when  max_ending_here > 0 */
     if (max_so_far < max_ending_here)
         max_so_far = max_ending_here;

   }
   return max_so_far;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=max(a,n,m);
    cout<<sum<<endl;
    return 0;
}
