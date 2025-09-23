#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&a,const int n) {
	if(a.size()==2) {
		cout<<"Yes"<<endl;
	} else {
		map<int,int>hmap;
		for(int i = 0; i<n; i++) {
			hmap[a[i]]++;
		}
		if(hmap.size()>=3) {
			cout<<"No"<<endl;
		} else {
			if(hmap.size()==1) {
				cout<<"Yes"<<endl;
			} else {
				int freqFirstElement = hmap.begin()->second;
				int freqSecondElement = hmap.rbegin()->second;
				if(freqFirstElement==freqSecondElement) {
					cout<<"Yes"<<endl;
				} else if(n%2==1 && abs(freqFirstElement-freqSecondElement)==1) {
					cout<<"Yes"<<endl;
				} else {
					cout<<"No"<<endl;
				}
			}
		}	
	}
}

int main(){
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
