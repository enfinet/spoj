#include<stdio.h>

int cnt[1000001];
int a[1000001];
int max;
void sieve(){
	long i,j;
	for(i=2;i<max;i++){
		if(cnt[i]!=0){
			for(j=2;i*j<=max;j++){
				a[i*j]=a[i*j]+cnt[i];
			}
		}
	}
}
int main()
{
	int n,i,j,k,count;
	int ele[100001];
	scanf("%d",&n);
	max=-1;
	for(i=0;i<n;i++){
		scanf("%d",&ele[i]);
		if(max<ele[i])
			max=ele[i];
		cnt[ele[i]]++;
	}
	sieve();
	for(i=0;i<n;i++){
		if(ele[i]!=1)
			printf("%d\n",a[ele[i]]+cnt[ele[i]]-1+cnt[1]);

		else
			printf("%d\n",a[ele[i]]+cnt[ele[i]]-1);
	}
	return 0;
}
