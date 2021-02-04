#include<bits/stdc++.h>
using namespace std;

int main(){
    string input1,input2;
    cin>>input1>>input2;
    for_each(input1.begin(), input1.end(), [](char & c){
    c = toupper(c);
	});
	for_each(input2.begin(), input2.end(), [](char & c){
    c = toupper(c);
	});
    int value = input1.compare(input2);
    if(value==0){
    	cout<<0;
    	return 0;
    }
    cout<<(value>0?1:-1);
    return 0;
}