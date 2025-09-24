#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&a) {
	int result = 0;
	for(int num : a) {
		result += num;
	}
	result = result*-1;
	cout<<result<<endl;
}

int main(){
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n-1);
        for(int i = 0; i<n-1; i++){
            cin>>a[i];
        }
        solve(a);
    }
    return 0;
}
