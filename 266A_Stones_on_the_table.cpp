#include <iostream>

using namespace std;

int main()
{
   string s;
   int n;
   int count=0;
   cin>>n;
   cin>>s;
   if(n==1){
       cout<<0;
       return 0;
   }
   for(int i = 0; i< n-1; i++){
       if(s[i]==s[i+1]){
           count++;
       }
   }
   cout<<count;
   return 0;
}