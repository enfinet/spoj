#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n) {
		int num;
		stack < int > a;
		int arr[1100],b[1100];
		for(int j=1;j<=n;j++)
			cin>>b[j];
		int x=1;
		for(int i=1;i<=n;) {
			num=b[i];
			if(num==x) {
				arr[x]=num;
				x++;
				i++;
			} else if((!a.empty())&&((a.top())==x )){
				arr[x]=a.top();
				a.pop();
				x++;
			}
			else {
				a.push(num);
				i++;
			}
		}
		while(x<=n) {
			arr[x]=a.top();
			a.pop();
			x++;
		}
/*		for(int t=1;t<=n;t++)
			cout<<arr[t]<<" ";
		cout<<endl;*/
		int y;
		for(y=1;y<n;y++) {
			if(arr[y]+1 != arr[y+1]) {
				cout<<"no"<<endl;
				break;
			}
		}
		if(y==n)cout<<"yes"<<endl;
		cin>>n;
	}
	return 0;
}
