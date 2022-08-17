#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int final=0;
		int a;
		cin>>a;
		int arr[a];
		for(int i=0;i<a;i++){
			cin>>arr[i];
		}
		for(int i=1;i<a-1;i++){
		int left=arr[i];
		for(int j=0;j<i;j++){
			left=max(left,arr[j]);
		}
		int right=arr[i];
		for(int j=i+1;j<a;j++){
			right=max(right,arr[j]);
		}
		final+=(min(left,right)-arr[i]);
	}
	cout<<final<<endl;;
	}
	
	

	return 0;
}
