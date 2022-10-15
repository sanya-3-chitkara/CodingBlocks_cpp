#include<iostream>
#include<climits>
#include<algorithm>
#define ll long long int
using namespace std;
bool canPaint(ll boards[],ll n,ll k, ll time){
	ll painting = 0;
	ll count = 1;
	for(ll i=0;i<n;i++){
		painting+=boards[i];
		if(painting>time){
			painting=boards[i];
			count++;
		}
		
		
	}
	if(count<=k)
	return true;
	else
	return false;
}
ll getMax(ll boards[],ll n){
	ll max1 = INT_MIN;
	for(ll i = 0;i<n;i++){
		if(boards[i]>max1)
		max1=boards[i];
	}
	return max1;
}
ll paintersPartitionProblem(ll boards[],ll n,ll k,ll t){
	ll sum=0;
	for(ll i=0;i<n;i++){
		// boards[i]*=t;
		sum+=boards[i];
	}
	ll s = getMax(boards,n);
	ll e = sum;
	ll ans = INT_MAX;
	while(s<=e){
		ll mid = (s+e)/2;
		bool canDraw = canPaint(boards,n,k,mid);
		// cout<<mid<<endl;
		if(canDraw){
			e = mid-1;
			ans = mid;
		}
		else
		s = mid+1;
	}
	return (ans*t)%10000003;
}

int main() {
	ll n,k,t;
	cin>>n>>k>>t;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	// sort(a,a+n);
	cout<<paintersPartitionProblem(a,n,k,t)<<endl;
	return 0;
}
