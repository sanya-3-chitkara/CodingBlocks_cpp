#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int find){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==find){
			return mid;
		}
		else if(arr[mid]>find){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int find;
	cin>>find;
	cout<<binarysearch(arr,n,find);
}
