#include<iostream>
using namespace std;
int kadane(int a[], int low, int high){
	int maxSum=0,currentSum=0;
	for(int i=low;i<=high;i++){
		currentSum+=a[i];
		maxSum = max(maxSum,currentSum);
		if(currentSum<0)
			currentSum=0;
	}
	return maxSum;
}
int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int sum1 = kadane(a,0,n-1);
		int cumulativeSum  = 0;
		for(int i=0;i<n;i++){
			cumulativeSum+=a[i];
			a[i]*=(-1);
		}
		int sum2 = cumulativeSum + kadane(a,0,n-2);
		int sum3 = cumulativeSum + kadane(a,1,n-1);
		int maxSum = max(sum1,max(sum2,sum3));
		cout<<maxSum<<endl;
	}
	return 0;
}
