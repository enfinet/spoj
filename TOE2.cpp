#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool check_f(string s,char ch){
	for(int i=0;i<8;i=i+3){
		if((s[i]==ch) && (s[i+1]==ch) && (s[i+2]==ch))
			return true;
	}
	for(int i=0;i<3;i++){
		if((s[i]==ch) && (s[i+3]==ch) && (s[i+6]==ch))
			return true;
	}
	
	if((s[2]==ch) && (s[4]==ch) && (s[6]==ch))
		return true;
	if((s[0]==ch) && (s[4]==ch) && (s[8]==ch))
		return true;
	return false;
	
}

int main(){
	while(1){
		string str;
		cin>>str;
		if(str=="end")
			break;
		else{
			int count_x=count(str.begin(),str.end(),'X');
			int count_o=count(str.begin(),str.end(),'O');
			if(check_f(str,'X') && (count_x == count_o + 1)&& (!check_f(str,'O')))
				cout<<"valid\n";
			else if(check_f(str,'O') && (count_o==count_x)&&(!check_f(str,'X')))
				cout<<"valid\n";
			else if((count_x+count_o == 9)&&(!check_f(str,'X'))&&(!check_f(str,'O')&&(count_x == count_o +1)) )
					cout<<"valid"<<"\n";			
			else
					cout<<"invalid\n";
			
		}
	}
	return 0;
}
