#include<bits/stdc++.h>
using namespace std;

void solve(char (&a)[10][10]) {
	int result = 0;
	for(int i = 0; i<10; i++) {
		for(int j = 0; j<10; j++) {
			if(a[i][j]=='X') {
				result+=min({i, j, 9 - i, 9 - j}) + 1;	
			}
		}
	}
	cout<<result<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        char a[10][10];
        for(int i = 0; i<10; i++){
			for(int j = 0; j<10; j++) {
				cin>>a[i][j];
			}
        }
        solve(a);
    }
    return 0;
}
