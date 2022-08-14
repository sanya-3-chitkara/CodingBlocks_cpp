#include<iostream>
using namespace std;
int main() {
	int m,n,k=0,l=0,count=0;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int total=m*n;
	while(k<m && l<n){
		if(count==total){
			break;
		}
		for(int i=k;i<m;i++){
			cout<<arr[i][l]<<", ";
			count++;
		}
		l++;
		if(count==total){
			break;
		}
		for(int i=l;i<n;i++){
			cout<<arr[m-1][i]<<", ";
			count++;
		}
		m--;
		if(total==count){
			break;
		}
		if(k<m){
			for(int i=m-1;i>=k;i--){
				cout<<arr[i][n-1]<<", ";
				count++;
			}
			n--;
		}
		if(count==total){
			break;
		}
		if(l<n){
			for(int i=n-1;i>=l;i--){
				cout<<arr[k][i]<<", ";
				count++;
			}
			k++;
		}
	}
	
	cout<<"END";
	return 0;
}
