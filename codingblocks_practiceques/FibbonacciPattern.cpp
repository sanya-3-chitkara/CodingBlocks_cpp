#include <iostream>
using namespace std;



int main(){

	int N;
	cin>>N;
	int First = 0;
	int Second = 1;
	int Next;


	for (int i = 0; i < N; i++)
	{

	for (int j = 0; j <= i; j++)
	{
		cout<<First<<" ";
		Next = First + Second;
		First = Second;
		Second = Next;
	}
	cout<<endl;
}

	return 0;
}
