#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"0";
    }
    long long p[n], product=1;
    for(int i=0;i<n;i++){
        product=product*arr[i];
    }
    for(int i=0;i<n;i++){
        p[i]=product/arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    
    return 0;
}
