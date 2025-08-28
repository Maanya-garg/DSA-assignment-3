#include <iostream>
using namespace std;
# define MAX 4
int stack[MAX];
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

int main() {
  
    int choice;

    while (true) {
        cout << "\n1.Push  2.Pop  3.isEmpty()  4.isFull()  5.Peek  6.Display 7.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            	int element;
            	cout<<"enter the element";
            	cin>>element;
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3: 
              if (isEmpty())
                    printf("Stack is empty.\n");
                else
                    printf("Stack is not empty.\n");
                    break;
            case 4: 
               if (isFull())
                    printf("Stack is full.\n");
                else
                    printf("Stack is not full.\n");
                    break;
            case 5: 
            peek();
            break;
            case 6: 
            display();
            break;
            case 7:
                cout<<"exiting program";
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
}
