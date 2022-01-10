#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   unordered_map<char,int> hmap;
   for(int i= 0;i<s.size();i++){
       if(hmap.find(s[i])==hmap.end()){
           hmap[s[i]]==1;
       }
       else{
           hmap[s[i]]++;
       }
   }
   if(hmap.size()%2==0){
       cout<<"CHAT WITH HER!";
   }
   else{
       cout<<"IGNORE HIM!";
   }
   return 0;
}