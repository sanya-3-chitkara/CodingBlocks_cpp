#include <bits/stdc++.h> 
using namespace std; 

// Function to print Next Greater Element for each element of the array
void nextGreater(int arr[], int n) 
{   vector<int>ans;
    stack<int>s;
    s.push(-1);

    for(int i=n-1;i>=0;i--){

        while(!s.empty() && s.top()!=-1 && arr[s.top()]<=arr[i]){
            s.pop();
        }

        ans.push_back(s.top());
        s.push(i);
    }

    reverse(ans.begin(),ans.end());

    for(int i=0;i<n;i++){
        if(ans[i]==-1){
            cout<<arr[i]<<","<<-1<<endl;
        }
        else{
            cout<<arr[i]<<","<<arr[ans[i]]<<endl;
        }
    }
 int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        nextGreater(arr, n); 
    }
	
	return 0; 
} 

