#include <iostream>
using namespace std;

bool possible(int arr[],int n,int stud,int mid){
	int stud_count=1;
	int total_pages=0;
	for(int i=0;i<n;i++){
		if(total_pages+arr[i]<=mid){
			total_pages+=arr[i];
		}
		else{
			stud_count++;
			total_pages=arr[i];
			if(stud_count>stud|| arr[i]>mid){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,stud;
		cin>>n>>stud;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int s=0,sum=0;
		for(int i=0;i<n;i++){
			sum+=arr[i];
		}
		int end=sum,ans=-1;
		while(s<=end){
			int mid=s+(end-s)/2;
			if(possible(arr,n,stud,mid)){
				ans=mid;
				end=mid-1;
			}
			else{
				s=mid+1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
