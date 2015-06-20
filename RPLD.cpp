#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>

using namespace std;

string str(int num)
{
    int i=0;
    string s="";
    while(num) {
        s+=(char)(num%10+48);
        num/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    int t;
    scanf("%d",&t);
    int cas=1;
    while(t--) {
        set< pair<int ,int> >st;
        //map<string,int >mp;
        int n,k;
        scanf("%d%d",&n,&k);
        int f=k;
        int num1,num2;
        while(k--) {
            scanf("%d%d",&num1,&num2);
            st.insert(make_pair(num1,num2));
            /*string s=str(num1)+"-"+str(num2);
            cout<<s<<endl;
            if(mp[s])f=1;
            else mp[s]=1;*/
        }
        /*set < pair<int ,int> > :: iterator it=st.begin();
        num1=it->first,num2=it->second;
        //it++;
        cout<<"output"<<endl;
        while(it!=st.end()){
            cout<<it->first<<" "<<it->second<<endl;
          //  cout<<num1<<" "<<num2<<endl;
/*            if(it->first==num1 && it->second==num2) {
                f=1;
                break;
            }
            num1=it->first,num2=it->second;
            it++;
            //cout<<endl;
        }*/
        if(f!=st.size()) printf("Scenario #%d: impossible\n",cas);
        else printf("Scenario #%d: possible\n",cas);
        cas++;
    }
    return 0;
}
