#include<bits/stdc++.h>
using namespace std;

void solve(vector<char>&a, const int n) {
	int answer = 0;
	for(int i = 0; i<n; i++) {
		if(a[i]=='.') {
			if(i+1<n && a[i+1]=='.' && i+2<n && a[i+2]=='.') {
				cout<<2<<endl;
				return;
			}
			answer++;	
		}
	}
	cout<<answer<<endl;
}

int main(){
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin>>n;
        vector<char> a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        solve(a,n);
    }
    return 0;
}
