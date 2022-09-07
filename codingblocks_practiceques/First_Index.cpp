#include<iostream>
using namespace std;

int first_index(int arr[], int s, int e, int find){
	if(s>e){
		return -1;
	}
	if(arr[s]==find){
		return s;
	}
	return first_index(arr,s+1,e,find);
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int find;
	cin>>find;
	cout<<first_index(arr,0,n-1,find);
	return 0;
}
