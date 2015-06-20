# include <vector>
# include <algorithm>
# include <cstdio>
# include <queue>
using namespace std;

int main()
{
	long tcases;
	scanf ("%ld",&tcases);
	while ( tcases-- ){
		int num, value;
		vector <int> myset;
		myset.reserve(1000001);
		priority_queue <pair<int,int> > mypq;
		scanf ( "%d",&num );
		for ( int I=0; I<num;I++ ){
			scanf ("%d", &value );
			myset.push_back ( value );
		}
		sort ( myset.begin(),myset.end() );
		int sz = myset.size();
		int count;
		for ( int i=0; i <sz; ){
			count=0;
			do{
				count++;
				i++;
			} while ( myset[i-1] == myset[i] );
			mypq.push(pair<int,int>(count,myset[i-1]));
		}
		if ( (mypq.top()).first > (num/2) )
			printf("YES %d\n",(mypq.top()).second );
		else printf ("NO\n");
		myset.clear();
	}
	return 0;
}
