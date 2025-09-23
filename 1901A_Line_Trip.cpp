#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&a,const int n,const int k) {
	int minCapacity = 0;
	for(int i = 1; i<n; i++) {
		if(a[i]==k) {
			minCapacity = max(minCapacity,2*(k-a[n-2]));
		}else{
			minCapacity = max(minCapacity,a[i]-a[i-1]);
		}
	}
	cout<<minCapacity<<endl;
}

int main(){
    int t;
    cin >> t;
    
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> a(n+2);
        a[0] = 0;
        a[n+1] = k;
        for(int i = 1; i<n+1; i++){
            cin>>a[i];
        }
        solve(a,n+2,k);
    }
    return 0;
}
