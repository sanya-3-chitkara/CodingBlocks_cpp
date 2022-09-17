#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		if(k==1){
			int num=arr[0]+arr[n-1];
			for(int i=n-1;i>0;i--){
				arr[i]=arr[i]+arr[i-1];
			}
			arr[0]=num;
		}
		else{
			for(int i=0;i<n;i++){
				arr[i]=arr[i]+arr[i];
				
			}
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int div=pow(10,9)+7;
	cout<<sum%div<<endl;
}
