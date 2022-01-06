#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sinput,sout;
    cin>>sinput;
    int numberArray[51];
    int count=0;
    for(int i=0;i<sinput.length();i+=2){
        numberArray[count++]=sinput[i]-'0';
    }
    sort(numberArray,numberArray+count);
    for(int i=0;i<count;i++){
        if(i>0){
            sout.push_back('+');
        }
        sout.push_back(numberArray[i]+'0');
    }
    cout<<sout;
    return 0;
}