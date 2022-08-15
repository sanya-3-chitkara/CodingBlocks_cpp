#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	int c1,c2,c3,c4;
	int m,n;
	while(t--!=0){
		cin>>c1>>c2>>c3>>c4;
		cin>>m>>n;
		int r[m];
		int c[n];
		for(int i=0;i<m;i++){
			cin>>r[i];
		}
		for(int i=0;i<n;i++){
			cin>>c[i];
		}
		int minc=0,minr=0,result=0;
		for(int i=0;i<m;i++){
			minr+=min(c1*r[i],c2);
		}
		minr=min(minr,c3);
		for(int i=0;i<n;i++){
			minc+=min(c1*c[i],c2);
		}
		minc=min(minc,c3);
		result=min(minc+minr,c4);
		cout<<result<<endl;
	}
	return 0;
}
