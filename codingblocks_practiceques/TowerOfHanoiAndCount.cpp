#include <iostream>
using namespace std;

void toh(int n, string source, string helper, string destination, int &count){
	if(n==0){
		return;
	}
	//move n-1 disks from A to B
    count++;
	toh(n-1,source,destination,helper,count);
	//move nth disk from A to C
	cout<<"Move "<<n<<"th"<<" disc from "<<source<<" to "<<destination<<endl;
	//move n-1 disks from B to C
	toh(n-1,helper,source,destination,count);
}

int main(){
    int n,count=0;
    cin>>n;
	toh(n,"T1","T3","T2",count);
    cout<<count<<endl;
	return 0;
}
