#include<iostream>
#include<cctype>
#include<cstdio>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

int p[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499};

int p_npow[95];
int p_dpow[95];

int main()
{
    string str;
	while(getline(cin,str)) {
		map <char,int> m;
		map<char,int> :: iterator itr;
		int n=str.length();

		for(int i=0;i<95;i++){
			p_npow[i]=0;
			p_dpow[i]=0;
		}

		for(int i=0;i<n;i++) {
		    if(isalnum(str[i])) {
		        if(isdigit(str[i]))
                    m[str[i]]++;
                else
                    m[tolower(str[i])]++;
		    }
		}

        int flag=0,sum=0,f=0;
        for(itr=m.begin();itr!=m.end();itr++){
			int num2=(*itr).second;
			if(num2%2 && !flag)flag=1;
			else if(num2%2 && flag){
			    printf("0\n");
			    f=1;
			}
			if(f==1)break;
			if(num2%2==0) {
			    (*itr).second=num2/2;
			    sum+=(num2/2);
			} else {
			    (*itr).second=(num2-1)/2;
			    sum+=(num2-1)/2;
			}
        }
        if(f!=1) {
		for(int i=0;i<95;i++){
			int no=sum;
			while(no > 0){
				p_npow[i] += no/p[i];
				no /= p[i];
			}
		}

		for(itr=m.begin();itr!=m.end();itr++){
			int num2=(*itr).second;
			for(int i=0;i<95;i++){
							int num=num2;
                        	while(num > 0){
                                	p_dpow[i] += num/p[i];
                                	num /= p[i];

 							}
        	}

		}

		unsigned long long res=1;
		for(int i=0;i<95;i++){
			if(p_npow[i]>=p_dpow[i]){
				p_npow[i] -= p_dpow[i];
			}

			for(int j=1;j<=p_npow[i];j++){
				res *= p[i];
				//res %= 1000000007;
			}
		}


		cout<<res<<"\n";
        }
	}
	return 0;
}
