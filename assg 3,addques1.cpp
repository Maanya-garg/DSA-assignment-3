#include<iostream>
using namespace std;
void smallestelement(int arr[],int n){
		for (int i=0;i<n;i++){
		for (int j=i;j>=0;j--){
			if(arr[j]<arr[i]){
				cout<< "for"<<arr[i]<< "the element is"<<arr[j]<<endl;
				break;
			}
		}
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
