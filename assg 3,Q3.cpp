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
bool match(char open,char close){ 
if (open=='(' && close==')'||
open=='{' && close=='}' ||
open=='[' && close==']'){
	return true;}
	else {
		return false;
	}
}
bool check(char string[]){
	int len = strlen(string);
	for (int i=0;i<len;i++){
	if (string[i] == '(' || string[i] == '{' || string[i] == '['){
		push(string[i]);
	}
	else if (string[i] == ')' || string[i] == '}' || string[i] == ']'){
		if(isEmpty()){
			cout<<"unbalanced";
			return 0;
		}
		else{
			char top=pop();
			if (!match(top,string[i])){
				return false;
			}
		}
	}}
	return isEmpty();
}
int main(){ 
cout<<"enter string";
char string[50];
cin.getline(string,50);
if (check(string)){
	cout<<"balanced";
}
else{
	cout<<"unbalanced";
}
}

