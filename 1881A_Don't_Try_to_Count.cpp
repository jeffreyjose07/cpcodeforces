#include<bits/stdc++.h>
using namespace std;

void solve(string& x, string& s) {
	
	for(int ops=0; ops<=5; ops++) {
		if(x.find(s)!=string::npos) {
			cout<<ops<<endl;
			return;
		}
		x+=x;
	}
	cout<<-1<<endl;
}

int main(){
    int t;
    cin >> t;
    
    while (t--) {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        solve(x,s);
    }
    return 0;
}
