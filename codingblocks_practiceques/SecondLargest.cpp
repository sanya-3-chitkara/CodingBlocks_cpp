#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	// int ans=n-2;
	// cout<<arr[ans];
	for(int i=n-2;i>=0;i--){
		if(arr[i]!=arr[n-1]){
			cout<<arr[i];
			break;
		}
	}
	return 0;
	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<endl;
	// }
}
