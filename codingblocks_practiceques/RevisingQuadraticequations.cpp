#include<iostream>
#include <cmath>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int d=sqrt(b*b-4*a*c);
	int x=(-b+sqrt(b*b-4*a*c))/2*a;
	int y=(-b-sqrt(b*b-4*a*c))/2*a;
	if(d*d==b*b-4*a*c)
	{
		if(d==0)
		{
			cout<<"Real and Equal";
		}
		else
		{
			cout<<"Real and Distinct";
		}
		cout<<"\n";
		if(y>x)
		{
		cout<<x;
		cout<<" ";
		cout<<y;
		}
		else
		{
			cout<<y;
			cout<<" ";
			cout<<x;
		}

	}
	else
	{
		cout<<"Imaginary";
	}
	
	return 0;
}
