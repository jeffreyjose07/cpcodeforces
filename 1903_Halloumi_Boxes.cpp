#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&a, const int n) {
	if(n==0 ||n==1) {
		return true;
	}
	for(int i = 1; i<n; i++) {
		if(a[i]<a[i-1]) {
			return false;
		}
	}
	return true;
}

void solve(vector<int>&a,const int n, const int k) {
    if(k==1 && !isSorted(a,n)) {
    	cout<<"NO"<<endl;
    	return;
    }
    cout<<"YES"<<endl;
}

int main(){
    int t;
    cin >> t;
    
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        solve(a,n,k);
    }
    return 0;
}
