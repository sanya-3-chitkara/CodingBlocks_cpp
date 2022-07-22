#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int num;
		cin>>num;
		int temp=num;
		int base=1;
	    int dec_value=0;
	    while(temp){
			int lastdigit=temp%10;
		    temp=temp/10;
		    dec_value+=lastdigit*base;
		    base*=2;
	    }
	cout<<dec_value<<endl;
	}
	
	return 0;
}
