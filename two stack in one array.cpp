#include<iostream>
#include<stack>
using namespace std;
class twostack{
	public:
		int  *arr;
		int top1;
		int top2;
		int size;
		twostack(int size){
			this -> size = size;
			arr = new int[size];
			top1 = -1;
			top2 = size;
		}
		void push1(int element){
		if(size-top1>1){
			top1++;
			arr[top1]=element;
		}
		else{
			cout<<"stack overflow";
		}
	}
		void push2(int element){
		if(top2-size<1){
			top1--;
			arr[top2]=element;
		}
		else{
			cout<<"stack overflow";
		}
	}
		int pop1(){
			if(top1>=0){
				top1--;
			}
			else{
				cout<<"stack underflow";
			}
			
		}
		int pop2(){
			if(top2<size){
				top2++;
			}
			else{
				cout<<"stack underflow";
			}
		}
		int peek1(){
		if(top1>=0){
			return arr[top1];
		}
		else{
			cout<<"stack empty";
			return -1;
		}
	}
	int peek2(){
		if(top2<size){
			return arr[top2];
		}
		else{
			cout<<"stack empty";
			return -1;
		}
	}
};
int main(){
	twostack ab(5);
	ab.push1(5);                   
	ab.push1(15);
	ab.push2(25);
	
	ab.push2(35);
	ab.push2(45);
	cout<<ab.peek1();	
	
}
