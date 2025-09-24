#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&a,const int n) {
	int result = INT_MAX;
	for(int i = 0; i<n; i++) {
		if(a[i]==0) {
			cout<<0<<endl;
			return;
		}
		result = min(result,abs(a[i]));
	}
	cout<<result<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i<n; i++) {
    	cin>>a[i];
    }
    solve(a,n);
    return 0;
}
