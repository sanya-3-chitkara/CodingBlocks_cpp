#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
		int n1,n2;
		list<int> l1,l2;
		cin>>n1;
		for(int i=0;i<n1;i++)
		{
			int temp;
			cin>>temp;
			l1.push_back(temp);
		}
		cin>>n2;
		for(int i=0;i<n2;i++)
		{
			int temp;
			cin>>temp;
			l2.push_back(temp);
		}
		l1.merge(l2);
		for(auto x = l1.begin();x!=l1.end();x++){
			cout<<(*x)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
