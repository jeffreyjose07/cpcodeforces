#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int value = 0;
    char x;
    bool seen = 0;
    for(int i=0;i<n;i++){
        seen=0;
        for(int j=0;j<3;j++){
            cin>>x;
            if((x=='+')&&(!seen)){
                value++;
                seen=1;
            }
            else if((x=='-')&&(!seen)){
                value--;
                seen=1;
            }
        }
    }
    cout<<value;
    return 0;
}