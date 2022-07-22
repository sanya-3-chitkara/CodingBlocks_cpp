#include<iostream>
using namespace std;
int main() {
	int start,end,size;
	cin>>start;
	cin>>end;
	cin>>size;
	for(int i=start; i<=end;i+=size){
		int celcius=(5*(i-32))/9;
		cout<<i<<" "<<celcius<<endl;
	}
	return 0;
}
