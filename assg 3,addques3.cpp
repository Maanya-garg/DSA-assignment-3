#include<iostream>
using namespace std;
void greatestelement(int arr[],int n){
		for (int i=0;i<n;i++){
			bool found=false;
		for (int j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				cout<< "for"<<arr[i]<< "the element is"<<arr[j]<<endl;
				found=true;
				break;
			}
		}
		if (!found){
			cout<< "for"<<arr[i]<< "the element is"<<-1<<endl;
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
greatestelement(arr,n);
}
