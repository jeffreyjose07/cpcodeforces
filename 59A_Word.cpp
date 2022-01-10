#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   int countLower=0;
   int countUpper=0;
   for(int i=0;i<s.size();i++){
       if(isupper(s[i])){
           countUpper++;
       }
       else{
           countLower++;
       }
   }
   if(countLower>=countUpper){
       transform(s.begin(), s.end(), s.begin(), ::tolower);
   }
   else{
       transform(s.begin(), s.end(), s.begin(), ::toupper);
   }
   cout<<s;
   return 0;
}