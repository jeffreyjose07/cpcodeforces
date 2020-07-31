#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0;
    cin>>n>>k;
    int a[50],i;
    for ( i = 0; i < n; i++){
        cin>>a[i];
    }
    for ( i = 0; i < k; i++){
        if (a[i]!=0){
            count++; 
        }else{
            break;
        }
    }
    if(i>=k){
        for ( i = k; (i<n)&&(a[k-1]==a[i]); i++){
            if(a[k-1]==a[i])
                count++;
        }
    }
    cout<<count;
    return 0;
}