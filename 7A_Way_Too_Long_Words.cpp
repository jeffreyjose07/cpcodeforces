#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        string input;
        cin>>input;
        if(input.length()>10){
            string replaceString = to_string(input.length()-2);
            input.replace(1,input.length()-2,replaceString);
        }
        cout<<input<<"\n";
    }
    return 0;
}
