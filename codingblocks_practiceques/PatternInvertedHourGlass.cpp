#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;
cout<<endl;
for(int i=n;i>=0;i--)
{
for(int j=n;j>=i;j--)
{
cout<<j<<" ";
}
for(int space=n;space>=2*(n-i)-(n-2);space--)
{
cout<<"  ";
}
for(int j=i;j<=n;j++)
{
if(j!=0)
cout<<j<<" ";
}

    cout<<endl;
}
for(int i=1;i<=n;i++)
{
    for(int j=n;j>=i;j--)
    {
        cout<<j<<" ";
    }
    for(int space=1;space<=2*i-1;space++)
    {
        cout<<"  ";
    }
   for(int j=i;j<=n;j++)
   {
       cout<<j<<" ";
   }
    cout<<endl;
}

return 0;
}
