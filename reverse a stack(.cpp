#include<iostream>
#include<stack>
using namespace std;
int main(){
	string str="mayank";
	stack<char> s;
	for(int i=0;i<str.length();i++){
		char ch=str[i];
		s.push(ch);
	}
	cout<<s.top();
	stack<char> ans;
	while(!s.empty()){
		char c = s.top();
		ans.push(c);
		s.pop();
	}
	cout<<ans.top();
	return 0;
}
