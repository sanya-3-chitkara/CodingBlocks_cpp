#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    stack<int>s;
    
    for(int i=0;i<n;i++){
        
        int x;
        cin>>x;
        
        if(x==2){
            
            int a;
            cin>>a;
            
            s.push(a);
        }
        
        else{
            if(!s.empty()){cout<<s.top()<<endl;
            s.pop();
            }
			else{
				cout<<"No Code"<<endl;
			}
        }
    }

    return 0;
}
