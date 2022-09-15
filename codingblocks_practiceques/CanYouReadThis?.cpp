#include<iostream>
using namespace std;
// string (string str){
	
// }
int main() {
	string str;
	cin>>str;
	int n=str.length();
	for(int i=0;i<n;i++){
		if(str[i]>='A' && str[i]<='Z'){
			cout<<endl;
		}
		cout<<str[i];
	}
	return 0;
}
