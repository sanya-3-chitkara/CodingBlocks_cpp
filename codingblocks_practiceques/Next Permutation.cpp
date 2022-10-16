#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n){
	int ele,index=-1;
		for(int i=n-1;i>0;i--){
			if(arr[i]>arr[i-1]){
				ele=arr[i-1];
				index=i-1;
				break;
			}
		}
		if(index==-1){
			sort(arr,arr+n);
			return;
		}
		for(int i=n-1;i>index;i--){
			if(arr[i]>ele){
				swap(arr[i],arr[index]);
				break;
			}
		}
		reverse(arr+index+1,arr+n);
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		solve(arr,n);
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
