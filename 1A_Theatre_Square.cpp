#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,m,a;
    unsigned long long int value1,value2,value;
    cin>>n>>m>>a;
    if((a*a)>=(n*m))
        cout<<1;
    else{
        value1 = ceil(n/a);
        value2 = ceil(m/a);
        value = value1*value2;
        cout<<value;
    }
    return 0;
}