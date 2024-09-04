#include <bits/stdc++.h>

using namespace std;


void solve(string s, string t) {
	unordered_map<char,int>smap;
	unordered_map<char,int>tmap;
	
	int slen = s.length();
	int tlen = t.length();
	
	for(auto ch: s){
		smap[ch]++;
	}
	
	for(auto ch:t){
		tmap[ch]++;
	}
	
	int i = 0,j=0;
	while(i<slen && j<tlen){
		if(s.at(i)==t.at(j)){
			if(smap[s.at(i)]==tmap[s.at(i)]){
				smap[s.at(i)]--;
				tmap[s.at(i)]--;
				i++;j++;
			}else{
				if(smap[s.at(i)]<tmap[s.at(i)]){
					break;
				}else{
					smap[s.at(i)]--;
					i++;
				}
			}
		}else{
			smap[s.at(i)]--;
			i++;
		}
	}
	if(j<tlen){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
}

int main() {
    int T;
    cin >> T;
    while (T--) {
		string s, t;
		cin>>s>>t;
		solve(s,t);
    }
    return 0;
}