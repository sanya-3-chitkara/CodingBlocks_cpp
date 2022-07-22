#include<iostream>
using namespace std;
int main() {
	int n,even=0,odd=0;
	cin>>n;
	int i=1;
	while(n!=0){
		if(i%2==0){
			even+=n%10;
		}
		else{
			odd+=n%10;
		}
		n=n/10;
		i++;
	}
	cout<<odd<<endl;
	cout<<even;
	return 0;
}
