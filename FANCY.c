#include <stdio.h>
#include <string.h>

long long pkt [40];

int main(){
	char angka[1000];
	int ulang, i,j, panjang, seq;
	long long total;

	pkt[1]=1;
	for (i=2; i<=31; i++){
		pkt[i]=pkt[i-1]<<1;
	}       

	scanf("%d", &ulang);
	for (i=0; i<ulang; i++){
		scanf("%s",angka);
		total= 1ll;
		panjang=strlen(angka);
		seq=1;
//		angka[panjang]='k';
		for (j=1; j<=panjang; j++){
			if (angka[j]==angka[j-1]) seq++;
			else{
				//printf("length = %d\n", seq);
				total*=pkt[seq];
				seq=1;                   
			}   
		}

		printf("%lld\n", total);
	}
	return 0;
}

