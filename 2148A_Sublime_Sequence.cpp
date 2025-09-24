#include<bits/stdc++.h>
using namespace std;

void solve(const int n, const int k) {
	if(k%2) {
		cout<<n<<endl;
		return;
	}
	cout<<0<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        int n,k;
        cin>>n>>k;
        solve(n,k);
    }
    return 0;
}
