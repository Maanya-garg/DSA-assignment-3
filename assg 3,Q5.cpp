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
int pop(){
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
void convert(char input[]){
	int len = strlen(input);
	int a,b,c;
	for (int i=0;i<len;i++){
        char current_char = input[i];
        if (0<=current_char<=9){
            push(current_char);
        }
        else if (current_char == '+' || current_char == '-' || current_char == '*' || current_char == '/' || current_char == '^') {
            a=pop();
            b=pop();
            switch(current_char){
            		case '+':
	cout << a+b<<endl;
	break;
	case '*':
		c=a*b;
		break;
	case '-':
		c=a-b;
		break;
	case '/':
		c=a/b;
		break;
	case '^':
		c=a^b;
		break;
	default: cout << "Please enter a valid operation"<<endl;
}
a=b;
b=c;
			}
	}
	cout<<c;
}
int main(){
    cout<<"enter string: ";
    char input[MAX];
    cin.getline(input,MAX);
    convert(input);
    return 0;
}
