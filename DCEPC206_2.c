#include<stdio.h>
#define MaxVal 1000000

void update(long long tree[],long long idx) {
	long long num=idx;
	while (idx && (idx <= MaxVal)) {
		tree[idx] += (long long)num;
		idx += (idx & -idx);
	}
}
long long read(long long tree[],long long idx) {
	idx--;
	long long sum = 0ll;
	while (idx > 0ll) {
		sum += (long long)tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}
int main()
{
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		long long tree[1000001]={0ll};
		scanf("%d",&n);
		int i;
		long long num;
		long long sum=0ll;
		for (i=1; i<=n; i++) {
			scanf("%lld",&num);
			sum+=(long long)read(tree,num);
			update(tree,num);
		}
		printf("%lld\n",sum);
	}
	return 0;
}
