#include <iostream>
#include <string.h>
using namespace std;
# define MAX 50
char stack[50];
int top=-1;
bool isEmpty(){
    return top==-1;
}
bool isFull(){
    return top==MAX-1;
}
void push(int element){
	if(isFull()){
		cout<<"Overflow";
	}
	else {
		stack[++top]=element;
	}
}
int pop(){
	int temp;
	if(isEmpty()){
		cout<<"Underflow";
	}
	else {
		temp=stack[top];
		top=top-1;
	}
	return temp;
}
int peek() {
	if(isEmpty()){
		cout<<"Underflow";
	}
	else {
		cout<<stack[top];
	}
	return stack[top];
}

void display() {
		if(isEmpty()){
		cout<<"Underflow";
	}
	else{
    for (int j = top; j >=0; j--) {
        cout<<stack[j];
    }
}
}
int main(){ 
cout<<"enter string";
char string[50];
cin.getline(string,50);
int len = strlen(string);
for (int i=0;i<len;i++){
	push(string[i]);
}
cout<<"reversed string is"<<" ";
while(!isEmpty()){
	peek();
	pop();
}
}
