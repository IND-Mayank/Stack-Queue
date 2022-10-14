#include<iostream>
using namespace std;
class Queue{
	int *arr;
	int qfront;
	int rear;
	int size;
	public:
		Queue(int n){
			size=n;
			arr=new int[size];
			qfront = 0;
			rear = 0;
		}
		bool isempty(){
			if(qfront == rear){
				return true;
			}
			else false;
		}
		void enqueue(int data){
			if(rear==size){
				cout<<"queue is full"<<endl;
			}
			else{
				arr[rear]=data;
				rear++;
			}
		}
		int dequeue(){
			if(qfront == rear){
				return -1;
			}
			else{
				int ans=arr[qfront];
				qfront++;
				if(qfront ==  rear){
					qfront = 0;
					rear = 0;
				}
				return ans;
			}
		}
		int Front(){
			if(qfront == rear){
				return -1;
			}
			else{
				return arr[qfront];
			}
		}	
		
};
int main(){
	Queue q(5);
	q.enqueue(5);
	q.enqueue(4);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(7);
	q.enqueue(8);
	q.dequeue();
	cout<<q.Front();
	
	
}
