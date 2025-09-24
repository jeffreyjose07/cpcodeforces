#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&a,const int n) {
	vector<int>evenFields, oddFields;
	for(int field: a) {
		if(field%2) {
			oddFields.push_back(field);
		} else {
			evenFields.push_back(field);	
		}
	}
	int evenFieldCount = evenFields.size();
	int oddFieldsCount = oddFields.size();
	
	if(oddFieldsCount==0) {
		cout<<0<<endl;
		return;
	}
	sort(oddFields.rbegin(), oddFields.rend());
	
	long long result = 0;
	for(int num : evenFields) {
		result+=num;
	}
	
	for (int i = 0; i < (oddFieldsCount + 1) / 2; i++) {
		result += oddFields[i];
    }
	cout<<result<<endl;
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
