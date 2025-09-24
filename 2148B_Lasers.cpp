#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int s;
        for(int i = 0; i<n; i++){
            cin>>s;
        }
        for(int i = 0; i<m; i++){
            cin>>s;
        }
        cout<<n+m<<endl;
    }
    return 0;
}
