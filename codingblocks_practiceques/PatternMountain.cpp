#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
			cout<<"\t";
		}
		for(int j=1;j<2*(n-i);j++){
			cout<<"\t";
		}
		for(int k=i;k>=1;k--){
			if(n==k){
				continue;
			}
			cout<<k<<"\t";
		}
		cout<<endl;
	}

	return 0;
}
