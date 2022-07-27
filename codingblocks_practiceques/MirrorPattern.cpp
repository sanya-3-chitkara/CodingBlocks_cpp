#include <iostream>
using namespace std;

int main(){

/*
    *
  * * *
* * * * *
  * * *
    *
*/

int N;
cin>>N;


/*for (int i = 1; i <=2 ; i++)
{
	for (int j = 1; j <=2; j++)
	{
		cout<<" ";
	}
	cout<<endl;
}
*/


//Upper Part
for (int i = N-1; i >=0; i--)
{	
	if(i%2 == 0){
	//triangle 1
	for (int k = 0; k < i; k++)
	{
			cout<<" ";
	}

	for (int j = i; j <= N-1 ; j++)
	{
		cout<<"*"<<" ";
	}
	cout<<endl;

	}
}

// Lower Part

for (int i = 1; i < N; i++)
{	
	if(i%2 == 0){

	for (int k = 0; k < i; k++)
	{
			cout<<" ";
	}

	for (int j = i; j <= N-1 ; j++)
	{
		cout<<"*"<<" ";
	}
	cout<<endl;

	}
}


	return 0;
}
