#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	int sum=0;
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				sum=arr[i]+arr[j]+arr[k];
				if(sum==target){
					cout<<arr[i]<<", "<<arr[j]<<" "<<"and "<<arr[k]<<endl;
				}
			}
		}
	}
	return 0;
}
