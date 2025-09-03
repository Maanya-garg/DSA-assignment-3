#include<iostream>
#include<stack>
using namespace std;
std::stack<int> s;
void smallestelement(int arr[],int n){
	s.push(arr[0]);
for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            cout <<-1<<endl;
        } else {
            cout <<s.top()<<endl;
        }
        s.push(arr[i]);
    }
}
int main(){
	int arr[100];
	int n;
cout<<"enter size";
cin>>n;
cout<<"enter array elements";
for (int i=0;i<n;i++){
	cin>>arr[i];
}
smallestelement(arr,n);
}

