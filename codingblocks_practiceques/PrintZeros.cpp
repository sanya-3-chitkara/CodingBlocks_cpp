#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<i;
		cout<<"\t";
		for(int j=2;j<i;j++){
			cout<<"0";
			cout<<"\t";
		}
		if(i!=1){
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
