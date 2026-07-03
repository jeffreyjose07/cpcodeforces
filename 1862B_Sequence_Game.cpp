#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&a,const int n) {
	vector<int>answer;
	answer.push_back(a[0]);
	for(int i = 1; i<n; i++) {
		if(a[i-1]<=a[i]) {
			answer.push_back(a[i]);
		}else{
			answer.push_back(a[i]);
			answer.push_back(a[i]);
		}
	}
	cout<<answer.size()<<endl;
	for(int num : answer) {
		cout<<num<<" ";
	}
	cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        solve(a,n);
    }
    return 0;
}
