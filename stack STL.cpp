#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	s.push(2);
	s.push(3);
	s.push(5);
	s.push(6);
	cout<<s.top()<<endl;
	if(s.empty()){
		cout<<"empty";
	}
	else{
		cout<<"not empty"<<endl;
	}
	cout<<s.size();
}
