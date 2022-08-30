#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--){
		int m;
		cin>>m;
		int arr[m];
		for(int i=0;i<m;i++){
			cin>>arr[i];
		}
		int k;
		cin>>k;
		sort(arr,arr+m);
		int x=0;
		int y=m-1;
		int small=0;
		int big=0;
		while(x<y){
			if(arr[x]+arr[y]==k){
				small=arr[x];
				big=arr[y];
				x++;
				y--;
			}
			else if(arr[x]+arr[y]>k){
				y--;
			}
			else{
				x++;
			}
		}
		cout<<"Deepak should buy roses whose prices are "<<small<<" and "<<big<<"."<<endl;
	}
	return 0;
}
