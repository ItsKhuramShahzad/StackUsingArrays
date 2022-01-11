#include<iostream>
using namespace std;
#define size 10
//Implementing Stack using Array
int Array[size]={};
int top=-1;
void push(int x){
	if(top<size)
	{
		top++;
		Array[top]=x;
	}
	else {
		cout<<"Stack Over Flow"<<endl;
	}
}

int  pop (){
	if(top>=0)
	{
		int x= Array[top];
		top--;
	return 	x;
	}
	else {
		cout<<"Stack Over Empty"<<endl;
	}
	return 0;
	
}

int topFunc (){
	if(top>=0)
	{
	return 	Array[top];
	}
	else {
		cout<<"Stack Over Empty"<<endl;
	}
	return 0;
	
}
bool IsFull(){
	if (top==size-1)
	return true;
	else 
	return false;
	
	
}
bool IsEmty(){
	if (top<0)
	return true;
	else 
	return false;
	
	
}
void DisplayStack(){
	for (int i=0; i<=top;i++){
		
		cout<<Array[i]<<endl;
	}
	
}
int main (){
	 pop ();
	push(10);
	push(20);
	push(30);
	push(40);
	
	 pop ();
	push(50);
	DisplayStack();
	return 0;
}
