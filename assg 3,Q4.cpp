#include <iostream>
#include <string.h>
using namespace std;
# define MAX 50
char stack[MAX];
int top=-1;
bool isEmpty(){
    return top==-1;
}
bool isFull(){
    return top==MAX-1;
}
void push(char element){
	if(isFull()){
		cout<<"Overflow";
	}
	else {
		stack[++top]=element;
	}
}
char pop(){
	char temp;
	if(isEmpty()){
		return '\0';
	}
	else {
		temp=stack[top];
		top=top-1;
	}
	return temp;
}
int precedence(char op){
if (op == '+' || op == '-'){
	return 1;
}
if (op == '*' || op == '/' ){
	return 2;
}
if (op == '^'){
	return 3;
}
return 0;
}
void convert(char input[], char str[]){
	int len = strlen(input);
	int j=0;
	for (int i=0;i<len;i++){
        char current_char = input[i];
        if (current_char == '('){
            push(current_char);
        }
        else if (current_char == ')'){
            while(!isEmpty() && stack[top] != '('){
                str[j++]=pop();
            }
            if(!isEmpty() && stack[top] == '(') {
                pop();
            }
        }
        else if (current_char == '+' || current_char == '-' || current_char == '*' || current_char == '/' || current_char == '^') {
            while (!isEmpty() && precedence(stack[top]) >= precedence(current_char)){
                str[j++]=pop();
            }
            push(current_char);
        }
        else { 
            str[j++] = current_char;
        }
	}
    while (!isEmpty()){
        str[j++]=pop();
    }
    str[j] = '\0';
	cout << "Postfix expression: " << str << endl;
}
int main(){
    cout<<"enter string: ";
    char input[MAX];
    char str[MAX];
    cin.getline(input,MAX);
    convert(input,str);
    return 0;
}
