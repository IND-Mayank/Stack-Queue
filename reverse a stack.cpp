#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	string str;
	cin>>str;
	 stack<int> s;
	 for(int i=0;i<str.length();i++){
	 	char ch=str[i];
	 	
	 }
	 string ans="";
	 while(!s.empty()){
	 	char ch=s.top();
	 	ans.push_back(ch);
	 	s.pop();
	 }
	 cout<<ans;
	
}
