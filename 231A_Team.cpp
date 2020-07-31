#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count = 0;
    scanf("%d",&n);
    bool a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if((a&&b)||(b&&c)||(c&&a)){
            count++;
        }
    }
    cout<<count;
    return 0;
}