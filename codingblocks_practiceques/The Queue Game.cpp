#include <iostream>
#include<queue>
using namespace std;

int main()
{
  int t;
  cin>>t;
  
  for(int i=0;i<t;i++){
      
      int n;
      cin>>n;
      queue<int>q;
      
      int a=1;
      int arr[n];
      
      for(int i=0;i<n;i++)cin>>arr[i];
      
      for(int j=0;j<n;j++){
          
          
          
          if(arr[j]==1){
              q.push(1);
          }
          else{
              
              if(q.empty()){
                  cout<<"Invalid"<<endl;
                  a=0;
                   break;
              }
              else{
                  q.pop();
              }
             
          }
      }
      
      if(a==1){
          cout<<"Valid"<<endl;
      }
  }

    return 0;
}
