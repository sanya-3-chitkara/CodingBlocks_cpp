#include <iostream>
using namespace std;

void isprime(int n){
	int i,flag=0;
	for(i=2;i<=n/2;++i){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"Prime"<<endl;
	}
	else{
		cout<<"Not Prime"<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	isprime(n);
}
