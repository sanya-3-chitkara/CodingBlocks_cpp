#include<bits/stdc++.h>

using namespace std;
bool comparator(string s1,string s2)
{
    string xy= s1.append(s2);
    string yx= s2.append(s1);
    return xy>yx;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        sort(a,a+n,comparator);
         for(int i=0;i<n;i++)
         cout<<a[i];
         cout<<endl;
    }
    return 0;
}
