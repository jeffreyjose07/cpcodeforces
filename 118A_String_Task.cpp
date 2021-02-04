#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;
    regex vowels("[aeiouAEIUO]+");
    // regex consonant;
    if(regex_match(input.begin(),input.end(),vowels)){
        cout<<"Matched";
    }
    return 0;
}