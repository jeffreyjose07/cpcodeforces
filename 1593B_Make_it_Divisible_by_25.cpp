#include<bits/stdc++.h>
using namespace std;

int solve(string numeral, string target) {
	int targetIndex = target.size()-1;
	int numeralIndex = numeral.size()-1;
	
	int operations = 0;
	
	while(targetIndex>=0 && numeralIndex>=0 ) {
		if(target[targetIndex]==numeral[numeralIndex]) {
			targetIndex--;
		}else {
			operations++;
		}
		numeralIndex--;
	}
	
	return targetIndex<0 ? operations : INT_MAX;  
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        string n;
        cin>>n;
        vector<string>possibleEndings = {"00","25","50","75"};
        int result = INT_MAX;
        for(string ending : possibleEndings) {
			result = min(result,solve(n,ending));
        }
        cout<<result<<endl;
    }
    return 0;
}
