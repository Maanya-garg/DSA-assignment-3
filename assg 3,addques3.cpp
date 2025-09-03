#include<iostream>
#include<stack>
using namespace std;
std::stack<int> s;
void greatestelement(int arr[],int n){
	int result[n];
for (int i = n-1; i >=0 ; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            result[i]=-1;
        } else {
            result[i]=s.top();
        }
        s.push(arr[i]);
    }
    for (int i=0;i<n;i++){
    	cout<<result[i]<<" ";
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
greatestelement(arr,n);
}

