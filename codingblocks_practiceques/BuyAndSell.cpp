#include<iostream>
using namespace std;

int maxprofit(int prices[], int n){
	int buy=prices[0],maxprofit=0;
	for(int i=0;i<n;i++){
		if(buy>prices[i]){
			buy=prices[i];
		}
		else if(prices[i]-buy>maxprofit){
			maxprofit=prices[i]-buy;
		}
	}
	return maxprofit;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxprofit(arr,n);
	
	return 0;
}
