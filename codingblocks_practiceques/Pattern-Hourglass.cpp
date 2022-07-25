#include <iostream>
using namespace std;
/*
5 4 3 2 1 0 1 2 3 4 5
  4 3 2 1 0 1 2 3 4 
    3 2 1 0 1 2 3 
      2 1 0 1 2 
        1 0 1 
          0 
        1 0 1 
      2 1 0 1 2 
    3 2 1 0 1 2 3 
  4 3 2 1 0 1 2 3 4 
5 4 3 2 1 0 1 2 3 4 5
*/
int main(){
	int N;
	cin>>N;

for (int i = 1; i <= N; i++)
{	

	// UPPER PART

	// SPACES	
	for (int s = 1; s <= 2*i-2; s++)
	{
		cout<<" ";
	}
	// NUMBERS
	for (int j = N-i+1; j >=0 ; j--)
	{
		cout<<j<<" ";
	}

	for (int k = 1; k <= N-i+1 ; k++)
	{
		cout<<k<<" ";
	}

	cout<<endl;
}

for (int i = 0; i <= N*2-1 ; i++)
{
	cout<<" ";
}
cout<<"0"<<" "<<endl;;

for (int i = N; i >= 1; i--)
{	

	// LOWER PART

	// SPACES	
	for (int s = 1; s <= 2*i-2; s++)
	{
		cout<<" ";
	}
	// NUMBERS
	for (int j = N-i+1; j >=0 ; j--)
	{
		cout<<j<<" ";
	}

	for (int k = 1; k <= N-i+1 ; k++)
	{
		cout<<k<<" ";
	}

	cout<<endl;
}




	return 0;
}
