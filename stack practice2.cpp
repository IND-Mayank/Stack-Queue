#include<iostream>
using namespace std;
int main(){
	string arr;
	cin>>arr;
	//string arr="ABC123DEF";
	for(int i=0;i<arr.length();i++){
			for(int j=i+1;j<arr.length();j++)
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
	}
	for(int i=0;i<arr.length();i++){
		cout<<arr[i];

	}
}
