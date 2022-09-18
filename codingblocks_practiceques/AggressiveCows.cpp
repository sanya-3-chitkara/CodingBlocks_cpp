#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> stalls , int k , int mid){
    int cowsCount =1;
    int lastPos = stalls[0];
    for(int i = 0 ; i<stalls.size() ; i++){
        if(stalls[i]-lastPos>=mid){
            cowsCount++;
            if(cowsCount==k){
                return true;
            }
            lastPos=stalls[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int s = 0 ;
    int maxi = -1;
    for(int  i = 0 ; i<stalls.size() ; i++){
        maxi =max(maxi,stalls[i]);
    }
    int e = maxi;
    int ans  = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isPossible(stalls,k,mid)){
            ans = mid;
            s= mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int main(){
	int val;
	int n , cows;
	cin>>n>>cows;
	vector<int> stalls;
	for(int  i= 0 ; i< n ; i++){
	cin>>val;
	stalls.push_back(val);
}
cout<<aggressiveCows(stalls,cows)<<endl;
}
