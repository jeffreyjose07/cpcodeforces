#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&a,const int n, const int k) {
	for(int num : a) {
		if(num==k) {
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
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
