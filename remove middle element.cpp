#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&inputStack,int count,int size){
	if(count == size/2){
		inputStack.pop();
		return;
	}
	int num = inputStack.top();
	inputStack.pop();
	solve(inputStack,count+1,size);
	inputStack.push(num);
}
int main(){
	int count=0;
	stack<int> i;
	i.push(2);
	i.push(3);
	i.push(5);
	i.push(9);
	i.push(8);
	cout<<solve(i,count,5);
		
}
