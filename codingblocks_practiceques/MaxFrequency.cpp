#include<iostream>
using namespace std;
int main() {
	string str;
	cin>>str;
	int len=str.length();
	int max=-1;
	char result;
	int freq[256]={0};
	for(int i=0;i<len;i++){
		freq[str[i]]++;
	}
	for(int i=0;i<len;i++){
		if(max<freq[str[i]]){
			max=freq[str[i]];
			result=str[i];
		}
	}
	cout<<result;
	return 0;
}
