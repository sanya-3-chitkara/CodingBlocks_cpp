#include <iostream>
using namespace std;

void Printhere(int i, int j, int arr[]){
    if(arr[i]>arr[j]){
        cout<<arr[j]<<" "<<"and"<<" "<<arr[i]<<endl;
    }
    else{
        cout<<arr[i]<<" "<<"and"<<" "<<arr[j]<<endl;
    }
}

void pairssum(int arr[], int n, int x){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                Printhere(i,j,arr);
            }
        }
    }
    
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
    pairssum(arr,n,x);
	return 0;
}
