# include <cstdio>
# include <algorithm>

using namespace std;

int main()
	{
	int t, n, index, copy;
	int arr[50005];
	for(scanf("%d",&t);t;t--)
		{
		index=0;
		for(scanf("%d",&n);n;n--)
			scanf("%d",&arr[index++]);
		sort(arr,arr+index);
		index--;
		long long count=0;
		long long sum=0;
		for (int i=index;i>=0;i--)
			{
			if (arr[i]>0)
				sum += arr[i];
			if ( arr[i]==0)
				count++;
			}
		int start=1;
		while(count--)
			{
			start *= 2;
			start %= 1000000009;
			}
		count = start;

		if (arr[index]<0)
			{
			count=0;
			sum = arr[index];
			count++;
			while(arr[index]==arr[index-1] && index>0)
				{
				count++;index--;
				}
			}
		else if ( arr[index]==0)
			count--;

		printf("%lld %lld\n",sum,count);
		}
	return 0;
	}


