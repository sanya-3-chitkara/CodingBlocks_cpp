#include<iostream>
using namespace std;

void Odd_even(int no){
	int even=0,odd=0;
	while(no!=0){
		if(no%2==0){
			even+=no%10;
		}
		else{
			odd+=no%10;
		}
		no=no/10;
	}
	if(even%4==0 || odd%3==0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}

int main() {
	int n,number;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>number;
		Odd_even(number);
	}
	cout<<endl;
	

	return 0;
}
