#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    
    vector<int>ans;
    
    stack<int>s;
    
    s.push(-1);
    
   
    
    for(int i=n-1;i>=0;i--){
        
        while(!s.empty() && s.top()!=-1 && arr[s.top()]>=arr[i])s.pop();
        
        ans.push_back(s.top());
        
        s.push(i);
        
    }
    
    reverse(ans.begin(),ans.end());

	 vector<int>a;
    
     while (!s.empty()) {
        // cout << stack.top() <<" ";
        s.pop();
    }
    
    s.push(-1);
    
   
    
    for(int i=0;i<n;i++){
        
        while(!s.empty() && s.top()!=-1 && arr[s.top()]>=arr[i])s.pop();
        
        a.push_back(s.top());
        
        s.push(i);
        
    }
  long long ns=INT_MIN;

   for(int i=0;i<n;i++){

	   if(ans[i]==-1){
		   ans[i]=n;
	   }

	   long long b=ans[i]-a[i]-1;
	   long long l=arr[i];
	//  cout<<ans[i]<<" "<<a[i]<<endl;

	   ns=max(ns,l*b);
   }

   cout<<ns<<endl;
    
   

    return 0;
}
