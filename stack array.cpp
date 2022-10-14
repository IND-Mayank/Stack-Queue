#include<iostream>
#include<stack>
using namespace std;
class Stack{
	//proerties
	public:
		 int size;
		 int *arr;
		 int top;
		 //array lele bhai costructur se
	Stack(int size){
		this -> size= size;
		arr =new int[size];
		top = -1;
	}
	//push krba le bhai
	void push(int element){
		if(size-top>1){
			top++;
			arr[top]=element;
		}
		else{
			cout<<"stack overflow";
		}
	}
	//pop bhi krba hi lete hai
	void pop(){
		if(top>=0){
			top--;
		}
		else{
			cout<<"stack underflow";
		}
	}
	int peek(){
		if(top>=0){
			return arr[top];
		}
		else{
			cout<<"stack empty";
			return -1;
		}
	}
	bool empty(){
		if(top==-1){
			return true;
		}
		else{
			return false;
		}
}
};



int main(){
	Stack st(5);
	st.push(2);
	st.push(2);
	st.push(2);
	st.push(2);
	st.push(2);
	cout<<st.peek()<<endl;
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	cout<<st.peek();
}
