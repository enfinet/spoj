#include<stdio.h>
#define MaxVal 1000001

void update(int tree[],int idx) {
	while (idx && (idx <= MaxVal)) {
		tree[idx] += 1;
		idx += (idx & -idx);
	}
	if (!idx)tree[idx]++;
}
int read(int tree[],int idx) {
	idx--;
	int sum = 0;
	while (idx > 0) {
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	if (!idx)sum+=tree[idx];
	return sum;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
	int tree[1000001]={0};
	int n;
	scanf("%d",&n);
	int a[100001];
	for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
	int i,sum,k=n,res=0;
	for(i=n-1;i>=0;i--) {
		sum=read(tree,a[i]);
		update(tree,a[i]);
		a[i]=sum;
		res+=sum;
	}
	printf("%d\n",res);
    }
	/*for(i=0;i<k-1;i++)
		printf("%d ",a[i]);
	printf("\n");*/
	return 0;
}

