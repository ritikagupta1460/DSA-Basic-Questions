#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
const int capacity=10;
int stack[capacity];
int top=-1,i;
int arr[10];
int isFull(){
	if(top==capacity-1){
		
		return 1;
	}
	else{
		return 0;
	}
}
int isEmpty(){
	if(top==-1){
		cout<<"stack is empty";
		return 1;
	}
}
int push(int arr){
	
	if(isFull()){
		cout<<"stack is full";
	}
	else{
		top=top+1;
		stack[top]=arr;
		
	}
}
	


int display(){
	cout<<"stack elements are:\n";
	
		for (i=top;i>=0;i--)  
    	{  
        cout<<stack[i]<<" ";
    	} 
 
	
}
int main(){
	int arr[10];
	cout<<"enter array elements :";
	
	for(int i=0;i<10;i++){
		cin>>arr[i];
		
	}
	for(int i=0;i<10;i++){
		push(arr[i]);
	}
	cout<<"the reverse string is:\n";
	display();
	return 0;
}

