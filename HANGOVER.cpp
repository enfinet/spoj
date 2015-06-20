#include<iostream>
using namespace std;
int sumHarm(double sum){
     double tot = 0.0;
	int i=2;
     while(tot <= sum) {
		tot =(double)tot+(double) (1.0/i);
		i++;
	}
     return i-2 ;
}
int main()
{
	double sum;
	cin>>sum;
	while(sum != 0.00) {
	int x=sumHarm(sum);
	cout<<x<<" card(s)"<<endl;
	cin>>sum;
	}
	return 0;
}
