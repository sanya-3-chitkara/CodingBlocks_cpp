#include<iostream>
using namespace std;

bool isVowel(char c){
	return(c=='a'|| c=='e' || c=='i'|| c=='o'|| c=='u');
}

int longVowel(string str){
	int count=0, res=0;
	for(int i=0;i<str.length();i++){
		if(isVowel(str[i])){
			count++;
		}
		else{
			res=max(res,count);
			count=0;
		}
	}
	return max(res,count);
}

int main() {
	string str;
	cin>>str;
	cout<<longVowel(str);
	return 0;
}
