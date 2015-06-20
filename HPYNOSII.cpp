#include <stdlib.h>
#include <cstdio>
#include <cstring>


int a[109] = {0};
void precal(){
	a[1]=1;a[7]=4;a[10]=1;a[13]=2;a[19]=4;a[23]=3;a[28]=3;
	a[31]=2;a[32]=3;a[44]=4;a[49]=4;a[68]=2;a[70]=5;a[79]=3;
	a[82]=3;a[86]=2;a[91]=4;a[94]=4;a[97]=3;a[100]=1;a[103]=2;
	a[109]=4;
}

int getnum ( )
{
	int sum = 0;
	long long c;
	char s[11];
	scanf("%s",s);
	int l = strlen(s);
	for ( int c =0; c <l ; c++){
	sum += ((s[c]-'0')*(s[c]-'0'));}
	return sum;
}

int findsum ( int &sum )
{
    int array[3] = {0};
    int i = 0;
    int tsum = 0;
	int sumcp = sum;
    while ( sumcp> 0 ){
        array[i] = sumcp %10;
        sumcp /= 10;
        i++;
    }
    for ( int c = 0; c < 3; c++ ){
        tsum += ((array[c])*(array[c]));
    }
    return tsum;
}

int main()
{
    precal();
    long long tcases;
    scanf("%lld",&tcases);
	int sum = 0;
    while ( tcases-- ){
        sum = 0;
        int num_steps = 1;
        sum = getnum ();
	if ( sum > 109 ){
        while ( sum > 109 ){
            sum = findsum (sum);
            num_steps++;
        }}
        if ( a[sum] != 0 ){
            num_steps += a[sum];
            printf("%d\n", num_steps );
        }
        else {
            printf ( "-1\n");
        }
    }
    return (EXIT_SUCCESS);
}
