#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    vector<int>arr(t),p(t);
    for (int i = 0; i < t; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < t; i++) {
        cin>>p[i];
    }
    for (int i = 0; i < t; i++) {
        arr[i] -= p[i];
    }
    sort(arr.begin(),arr.end());
 
    long long ans = 0;
 
    for (int i = 0; i < t; i++) {
         int z = upper_bound(arr.begin()+i+1,arr.end(),-arr[i])-arr.begin();
         ans += t-z;
    }
    cout<<ans;
    return 0;
}
